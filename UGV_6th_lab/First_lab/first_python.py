import cv2
import numpy as np
image=cv2.imread('image.jpg')
empty=np.zeros(image.shape[:2],dtype="uint8")