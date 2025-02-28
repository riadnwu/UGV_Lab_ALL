from setuptools import sic
from traitlets import link

a='আ'
print(a)
aValue=ord(a)
print(aValue)
print(bin(aValue))
a=103

print(a)
print(bin(a))
aChar=chr(a)
print(aChar)

#for i in range(1,4000):
   #print(chr(i))
import cv2
img=cv2.imread('test.png')

print(img)
print(img.shape)
import librosa

signal,sr=librosa.load('testSignal.wav',sr=1600)

print(signal)