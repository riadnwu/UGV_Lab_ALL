import cv2
import numpy as np
from matplotlib import pyplot as plt
from numpy import uint8

image=cv2.imread("icon.jpg")


x,y,z=image.shape
x=int(x*(50/100))
y=int(y*(20/100))
image=cv2.resize(image,(x,y))
#image=cv2.rotate(image,cv2.ROTATE_90_CLOCKWISE)


#image=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

b,g,r=cv2.split(image)



arr=np.empty(image.shape[:2],dtype=uint8);
r=cv2.merge((arr,g,r))
g=cv2.merge((b,g,arr))
b=cv2.merge((b, arr,arr))


print(r)

#cv2.imwrite("incon2.jpg",image)
cv2.imshow("New Result",image)
cv2.imshow("Red",r)
cv2.imshow("Green",g)
cv2.imshow("Blue",b)
cv2.waitKey()
cv2.destroyAllWindows()
