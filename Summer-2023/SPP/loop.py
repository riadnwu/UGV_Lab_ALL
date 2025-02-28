
def all_loop():

    data=[120,340,60,712,885,134,118,119,317]
    size=len(data)
    maxValue=max(data)
    print("Max: "+str(maxValue))
    print(size)

    per=[]
    for i in range(0,size,+1):
        per.append((data[i]*100)/maxValue)


    print(per)

    value=17
    for i in range(2,value,1):
        if value%i==0:
            print("Not Prime Number")
            flag = True
            break
        if i==value-1:
            print("Prime Number")
