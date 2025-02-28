from deepface import DeepFace
models = [
  "VGG-Face",
  "Facenet",
  "Facenet512",
  "OpenFace",
  "DeepFace",
  "DeepID",
  "ArcFace",
  "Dlib",
  "SFace",
]
#detector_backend opencv, retinaface, mtcnn, ssd,dlib or mediapipe

import os

path = r"G:/Coding/UGV/Bangla-Money-Dataset-master/New-All-0-10-20-50-100"
dir_list = os.listdir(path)

for i in dir_list:
  dfs = DeepFace.find(detector_backend='retinaface', img_path = path + "\\" + i, db_path ="G:/Coding/UGV/Bangla-Money-Dataset-master/Temp", model_name = models[2],enforce_detection=False)
  print(dfs[0].columns)
  try:
    data=dfs[0]['identity'][0].split('/')
    data=data[len(data) - 1].split('.')[0]
    print(data)
    print(i)
  except:
    pass
'''
import os

path = r"G:/Coding/UGV/Bangla-Money-Dataset-master/New-All-0-10-20-50-100"
dir_list = os.listdir(path)

for i in dir_list:
  result = DeepFace.verify(img1_path ="G:/Coding/UGV/Bangla-Money-Dataset-master/New-All-0-10-20-50-100/10_3.jpg", img2_path =path + "\\" + i, model_name = models[2],enforce_detection=False)
  if result['distance']<.10:
    print(i.split('.')[0])
    print(result['distance'])'''
