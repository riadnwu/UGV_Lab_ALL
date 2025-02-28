data=open("data.txt","rt")
data=data.read()
print(data)
word=data.split(" ")
length=len(word)
#print(length)
count=0
for i in range(0,length):
    if (word[i]=="At"):
        print(word[i+1])
        print(word[i])
        count+=1
print(count)



