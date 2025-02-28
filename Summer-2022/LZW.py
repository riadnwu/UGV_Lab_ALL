data='abcababc'
print(data)
dic={}
que=[]
tempQue=[]
i=0
s=data[0]
leng=len(data)
newValue=256
encode=[]
while i<leng:
    if dic.get(s)==None and len(s)==1:
        print(s)
        dic[s]=ord(s)
        que.append(s)
        encode.append(dic[s])
        while tempQue!=[]:
            #print(tempQue)
            temp=tempQue.pop(0)+s
            dic[temp]=newValue
            que.append(temp)
            newValue=newValue+1
            #print(que)
            #break
        i = i + 1
        if i< leng:
            s = data[i]
        tempQue=que
        que=[]
        print('Queue: ' +str(tempQue))
        print('Dictionary: '+str(dic))
    elif dic.get(s) != None:
        i = i + 1
        if(i<len(data)):
            s = s+data[i]
        else:
            encode.append(dic[s])
            print(s)

    elif dic.get(s)==None:
        s=s[0:len(s)-1]
        print(s)
        que.append(s)
        encode.append(dic[s])
        while tempQue!=[]:
            temp=tempQue.pop(0)+s
            dic[temp]=newValue
            que.append(temp)
            newValue=newValue+1
        s = data[i]
        tempQue=que
        que=[]
        print('Queue: ' +str(tempQue))
        print('Dictionary: '+str(dic))

print('Encoded Data: '+str(encode))
