data=open("data.txt","r")
data=data.read()
data=data.split("\n")
print(data)
info=input("You question?")

print(data[0])
print(info)

for i in range (0,2):
    if(info.find(data[i*2])!=-1):
        print(data[i*2+1])
    else:
        print("Your Question is Invalid!!!")