import pyzed.sl as sl
import cv2
import numpy as np
import threading
import time
import signal
import os

zed_list = []
left_list = []
right_list = []
depth_list = []
timestamp_list = []
thread_list = []
stop_signal = False
output_directory = 'path/to/directory'


def signal_handler(signal, frame):
    global stop_signal
    stop_signal = True
    time.sleep(0.5)
    exit()


def grab_run(index):
    global stop_signal
    global zed_list
    global timestamp_list
    global left_list
    global right_list
    global depth_list

    runtime = sl.RuntimeParameters()
    while not stop_signal:
        err = zed_list[index].grab(runtime)
        if err == sl.ERROR_CODE.SUCCESS:
            # Retrieve the left image from the ZED camera
            zed_list[index].retrieve_image(left_list[index], sl.VIEW.LEFT)
            # Retrieve the right image from the ZED camera
            zed_list[index].retrieve_image(right_list[index], sl.VIEW.RIGHT)
            # Retrieve the depth map from the ZED camera
            zed_list[index].retrieve_measure(depth_list[index], sl.MEASURE.DEPTH)
            # Get the timestamp of the current frame
            timestamp_list[index] = zed_list[index].get_timestamp(sl.TIME_REFERENCE.CURRENT).data_ns
            # Save the left and right images and depth map
            save_image(left_list[index], f"left_image_{index}.jpg")
            save_image(right_list[index], f"right_image_{index}.jpg")
            save_depth_map(depth_list[index], f"depth_map_{index}.txt")
        time.sleep(0.001)  # 1ms
    zed_list[index].close()


def save_image(image, filename):
    global output_directory
    # Create the file path for the image
    file_path = os.path.join(output_directory, filename)
    # Save the image as a JPEG file
    cv2.imwrite(file_path, image.get_data())


def save_depth_map(depth_map, filename):
    global output_directory
    # Create the file path for the depth map
    file_path = os.path.join(output_directory, filename)
    # Save the depth map as a text file
    np.savetxt(file_path, depth_map.get_data())


def main():
    global stop_signal
    global zed_list
    global left_list
    global right_list
    global depth_list
    global timestamp_list
    global thread_list
    signal.signal(signal.SIGINT, signal_handler)

    print("Running...")
    init = sl.InitParameters()
    init.camera_resolution = sl.RESOLUTION.HD720
    init.camera_fps = 30  # The framerate is lowered to avoid any USB3 bandwidth issues

    # Create output directory if it doesn't exist
    if not os.path.exists(output_directory):
        os.makedirs(output_directory)

    # List and open cameras
    name_list = []
    last_ts_list = []
    cameras = sl.Camera.get_device_list()
    index = 0
    for cam in cameras:
        init.set_from_serial_number(cam.serial_number)
        name_list.append("ZED {}".format(cam.serial_number))
        print("Opening {}".format(name_list[index]))
        # Initialize the ZED camera and create image and depth map containers
        zed_list.append(sl.Camera())
        left_list.append(sl.Mat())
        right_list.append(sl.Mat())
        depth_list.append(sl.Mat())
        timestamp_list.append(0)
        last_ts_list.append(0)
        status = zed_list[index].open(init)
        if status != sl.ERROR_CODE.SUCCESS:
            print(repr(status))
            zed_list[index].close()
        index = index + 1

    # Start camera threads
    for index in range(0, len(zed_list)):
        if zed_list[index].is_opened():
            # Create a thread for each ZED camera to grab frames
            thread_list.append(threading.Thread(target=grab_run, args=(index,)))
            thread_list[index].start()

    # Display camera images
    key = ''
    while key != 113:  # for 'q' key
        for index in range(0, len(zed_list)):
            if zed_list[index].is_opened():
                if (timestamp_list[index] > last_ts_list[index]):
                    cv2.imshow(name_list[index], left_list[index].get_data())

        key = cv2.waitKey(10)
    cv2.destroyAllWindows()

    # Stop the threads
    stop_signal = True
    for index in range(0, len(thread_list)):
        thread_list[index].join()

    print("\nFINISH")


if __name__ == "__main__":
    main()