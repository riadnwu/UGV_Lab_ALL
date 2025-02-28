data=[25,35,29,35,38,25,350,29,35,1,38]
#     0  1  2  3  4  5  6  7  8  9

maxValue=data[0]
minValue=data[0]

maxValue2=data[0]
minValue2=data[0]

for i in range(0,len(data)):
    if data[i]>maxValue:
        maxValue2=maxValue
        maxValue=data[i]
    if data[i]<minValue:
        minValue2=minValue
        minValue=data[i]

print(minValue)
print(minValue2)
print(maxValue)
print(maxValue2)