import cv2
import numpy as np

image=cv2.imread('icon.jpg')
image=cv2.resize(image,(700,500))
print(image)
print(image.shape)
cv2.imshow('24-bit',image)


b,g,r=cv2.split(image)



Y,X=b.shape
print(b.shape)
gray=np.zeros((Y,X),dtype='uint8')
onBit=np.zeros((Y,X),dtype='uint8')
emp=np.zeros((Y,X),dtype='uint8')

b8=np.zeros((Y,X),dtype='uint8')
g8=np.zeros((Y,X),dtype='uint8')
r8=np.zeros((Y,X),dtype='uint8')


B=cv2.merge((b,emp,emp))
G=cv2.merge((emp,g,emp))
R=cv2.merge((emp,g,r))


cv2.imshow("Blue",B)
cv2.imshow("Green",G)
cv2.imshow("Red",R)

for y in range(0,Y-1):
    for x in range(0,X-1):
        gray[y][x]=(int)((b[y][x]*.21 + g[y][x]*.72 + r[y][x]*.12))
        if gray[y][x]>127:
            onBit[y][x]=255
        else:
            onBit[y][x] = 0
        b8[y][x]=((int)(b[y][x]/32)+1)*32-1
        g8[y][x] = ((int)(g[y][x] / 32)+1) * 32-1
        r8[y][x] = ((int)(r[y][x] / 64)+1) * 64-1
        print(repr(b8[y][x])+'--'+repr(g8[y][x])+'--'+repr(r8[y][x]))

color8=cv2.merge((b8,g8,r8))

cv2.imshow("Gray",gray)
cv2.imshow("1-Bit",onBit)
cv2.imshow("8-Bit Color",color8)




cv2.waitKey()