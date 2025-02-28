import cv2
import numpy as np
image=cv2.imread("img.png")
print(image) #RGB
print(image.shape)
b,g,r=cv2.split(image)

empty=np.zeros(image.shape[:2],dtype="uint8")
print(r)
print(g)
print(b)
#cv2.imshow("Blue",b)
#cv2.imshow("Green",g)
#cv2.imshow("Red",r)

blue=cv2.merge([b,empty,r])
green=cv2.merge([empty,g,empty])
red=cv2.merge([empty,g,r])

cv2.imshow("Smaple Image",image)
cv2.imshow("Blue",blue)
cv2.imshow("Green",green)
cv2.imshow("Red",red)
cv2.waitKey()

char='A'
print(char)
print(ord(char))

