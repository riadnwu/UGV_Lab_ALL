import os
import cv2
import face_recognition
from deepface import DeepFace

objs = DeepFace.analyze(img_path='G:/Coding/Python/UGV Projects/UGV_Assistant/data/known_face/2023_3_3_12_08_15.293846_1001_0.29649.JPG', actions=['emotion'])
print(objs['emotion'])