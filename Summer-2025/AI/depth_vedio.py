import cv2
import numpy as np

# --- Dummy Camera Calibration Parameters (Replace with actual calibrated values) ---
K1 = np.array([[800, 0, 320], [0, 800, 240], [0, 0, 1]], dtype=np.float32)
D1 = np.zeros((4, 1), dtype=np.float32)  # No distortion
K2 = np.array([[800, 0, 320], [0, 800, 240], [0, 0, 1]], dtype=np.float32)
D2 = np.zeros((4, 1), dtype=np.float32)  # No distortion

# Rotation and Translation between cameras
R = np.eye(3, dtype=np.float32)
T = np.array([-0.1, 0, 0], dtype=np.float32)  # 10cm baseline along X-axis

# --- Stereo Rectification ---
R1, R2, P1, P2, Q, _, _ = cv2.stereoRectify(K1, D1, K2, D2, (640, 480), R, T)

# Map for undistortion and rectification
map1x, map1y = cv2.initUndistortRectifyMap(K1, D1, R1, P1, (640, 480), cv2.CV_32FC1)
map2x, map2y = cv2.initUndistortRectifyMap(K2, D2, R2, P2, (640, 480), cv2.CV_32FC1)

# --- Stereo Matching (SGBM) ---
stereo = cv2.StereoSGBM_create(
    minDisparity=0,
    numDisparities=16 * 5,  # Must be divisible by 16
    blockSize=11,
    P1=8 * 3 * 11 ** 2,
    P2=32 * 3 * 11 ** 2,
    disp12MaxDiff=1,
    uniquenessRatio=10,
    speckleWindowSize=100,
    speckleRange=32
)

# --- Camera Capture ---
cap1 = cv2.VideoCapture(0)  # Index for the first camera
cap2 = cv2.VideoCapture(1)  # Index for the second camera

if not cap1.isOpened() or not cap2.isOpened():
    print("Error: Could not open one or both cameras.")
    exit()

# Create a window for displaying results
cv2.namedWindow('Depth Visualization', cv2.WINDOW_NORMAL)

while True:
    ret1, frame1 = cap1.read()
    ret2, frame2 = cap2.read()

    if not ret1 or not ret2:
        print("Error: Could not read frames from one or both cameras.")
        break

    # Convert to grayscale
    gray1 = cv2.cvtColor(frame1, cv2.COLOR_BGR2GRAY)
    gray2 = cv2.cvtColor(frame2, cv2.COLOR_BGR2GRAY)

    # Rectify images
    rectified_left = cv2.remap(gray1, map1x, map1y, cv2.INTER_LINEAR)
    rectified_right = cv2.remap(gray2, map2x, map2y, cv2.INTER_LINEAR)

    # Compute disparity map
    disparity = stereo.compute(rectified_left, rectified_right).astype(np.float32) / 16.0

    # Convert disparity to depth using Q matrix
    depth_map = cv2.reprojectImageTo3D(disparity, Q)[:, :, 2]

    # Remove invalid points (set to maximum depth)
    depth_map[disparity <= 0] = np.max(depth_map[disparity > 0]) if np.any(disparity > 0) else 0

    # Normalize depth for visualization (invert so closer objects are brighter)
    depth_normalized = cv2.normalize(depth_map, None, 0, 255, cv2.NORM_MINMAX)
    depth_normalized = np.uint8(255 - depth_normalized)  # Invert: closer = brighter

    # Create red heat map
    red_heatmap = np.zeros((depth_normalized.shape[0], depth_normalized.shape[1], 3), dtype=np.uint8)
    red_heatmap[:, :, 2] = depth_normalized  # Red channel

    # Apply colormap for better visualization (Jet colormap with red emphasis)
    heatmap_colored = cv2.applyColorMap(depth_normalized, cv2.COLORMAP_JET)

    # Blend with original image for context (optional)
    alpha = 0.7
    blended = cv2.addWeighted(frame1, 1 - alpha, heatmap_colored, alpha, 0)

    # Display results
    cv2.imshow('Left Camera', frame1)
    cv2.imshow('Right Camera', frame2)
    cv2.imshow('Depth Visualization', blended)
    #cv2.imshow('Red Heat Map', red_heatmap)
    cv2.imshow('Colored Heat Map', heatmap_colored)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap1.release()
cap2.release()
cv2.destroyAllWindows()