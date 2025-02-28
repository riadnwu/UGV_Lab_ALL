import numpy as np
filename = 'example.txt'
file = open(filename, 'rt')
text = file.read()
file.close()
data=text.split()

total=""
main=[]
len=len(data)
i=0
while i<len:
    if(data[i]=="GPA"):
        total+=","+data[i+2]+"\n"

        i = i + 3
    elif (data[i] == "ID") :
        total += "," + data[i + 2]
        i = i + 3
    elif (data[i] == "Name") :
        total +=  data[i + 2]+" "+data[i + 3]
        i = i + 4
    else:
        i=i+1
print(total)