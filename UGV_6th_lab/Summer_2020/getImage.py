import cv2
import numpy as np
image=cv2.imread("icon.jpg",)

x,y,z=image.shape
x=int(x*(50/100))
y=int(y*(30/100))
dim=(x,y)
image=cv2.resize(image,dim)
image=cv2.rotate(image,cv2.ROTATE_90_CLOCKWISE)
#image=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
r,g,b=cv2.split(image)


cv2.imshow("Icon",image)
cv2.waitKey()
cv2.destroyAllWindows()