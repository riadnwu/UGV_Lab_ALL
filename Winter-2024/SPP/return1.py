
def max_min(data):
    maxValue=data[0]
    minValue=data[0]
    data.append(100)

    for i in range(1,len(data)):
        if data[i]<minValue:
            minValue=data[i]
        if data[i]>maxValue:
            maxValue=data[i]
    return maxValue


