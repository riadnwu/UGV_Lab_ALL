from re import sub

import numpy as np

data=np.genfromtxt('heart.csv',delimiter=',')
row=len(data) #303
col=len(data[0])

fold=5
subValue=(int) (row/fold)
print(row)
print(col)
#print(subValue)

train=[]
test=[]

for i in range(fold):
    if(i==0):
        test=data[i*subValue:(i+1)*subValue]
    else:
        train.append(data[i*subValue:(i+1)*subValue])

print(len(test))#2d
print(train) #3d