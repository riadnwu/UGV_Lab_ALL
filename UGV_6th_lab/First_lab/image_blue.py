import cv2
import numpy as np

img = cv2.imread('download.png')

hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

lower_blue = np.array([32, 70, 96])
upper_blue = np.array([239, 245, 250])

mask = cv2.inRange(hsv, lower_blue, upper_blue)

cv2.imshow('image', img)
cv2.imshow('mask', mask)

while(True):
   k = cv2.waitKey(5) & 0xFF
   if k == 27:
      break

cv2.destroyAllWindows()