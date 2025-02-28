import cv2
import os


def split_video(input_video_path, output_directory, num_parts):
    # Open the input video file
    cap = cv2.VideoCapture(input_video_path)

    # Get total frames and frame rate
    total_frames = int(cap.get(cv2.CAP_PROP_FRAME_COUNT))
    fps = cap.get(cv2.CAP_PROP_FPS)

    # Calculate frames per part
    frames_per_part = total_frames // num_parts

    # Create output directory if it doesn't exist
    os.makedirs(output_directory, exist_ok=True)

    # Loop through each part and write the frames to separate video files
    for i in range(num_parts):
        start_frame = i * frames_per_part
        end_frame = start_frame + frames_per_part

        # Set output video path
        output_video_path = os.path.join(output_directory, f"part_{i + 1}.mp4")

        # Create VideoWriter object
        fourcc = cv2.VideoWriter_fourcc(*'mp4v')  # Codec for MP4 files
        out = cv2.VideoWriter(output_video_path, fourcc, fps, (int(cap.get(3)), int(cap.get(4))))

        # Set the frame position to start reading from
        cap.set(cv2.CAP_PROP_POS_FRAMES, start_frame)

        # Read frames and write to output video file
        for frame_num in range(start_frame, end_frame):
            ret, frame = cap.read()
            if ret:
                out.write(frame)
            else:
                break

        # Release the VideoWriter object
        out.release()

    # Release the input video capture object
    cap.release()


# Example usage:
input_video_path = 'part_1.mp4'  # Path to your input video file
output_directory = '20_output_parts'  # Directory to save the output video parts
num_parts = 8  # Number of parts to split the video into

split_video(input_video_path, output_directory, num_parts)