
import cv2
import numpy as np

image=cv2.imread("img.png")
image=cv2.resize(image,None,fx=.8,fy=.5)
print(image.shape[:2])

empty=np.zeros(image.shape[:2],dtype="uint8")
b,g,r=cv2.split(image)
b=cv2.merge([b,empty,empty])
g=cv2.merge([empty,g,empty])
r=cv2.merge([empty,empty,r])

cv2.imshow("Image",image)
cv2.imshow("Red",r)
cv2.imshow("Green",g)
cv2.imshow("Blue",b)
cv2.waitKey()