file = open("input.txt", 'r')
Data = file.read()
length = len(Data)
char = []

# Check if data exist and assign if exist.
if len(Data) > 0:
    char.append(Data[0])
else:
    print("Data not found")

# Loop through all the data and find all the unique character. -> char
for i in range(0, length):
    for j in range(0, len(char) + 1):
        if Data[i] == char[j]:
            break
        else:
            if j == len(char) - 1 and Data[i] != char[j]:
                char.append(Data[i])

entry = char.copy()

encodedvalue = []
i=0
flag = False
for j in range(0, length):
# i=0
# while i < length:
    if(flag==True):
        break

    z=0
    c=0
    index = 0
    val = Data[i]
    while 1:
        c = c+1
        if val in entry:
            while z < len(entry):
                if val == entry[z]:
                    index = z
                    break
                z += 1
            if i == length-1 and c== 1:
                encodedvalue.append(index)
                flag = True
                break
            if (i+c) >= len(Data):
                encodedvalue.append(index)
                flag = True
                break
            val = val + Data[i + c]

        else:
            if i == length-1 and c == 1:
                encodedvalue.append(index)
                flag = True
                break

            entry.append(val)
            encodedvalue.append(index)
            i = i + (c-1)
            break

print(char)
print(entry)
print(Data)
print(encodedvalue)



f = open("output.txt", "a")
for v in char:
    f.write(str(ord(v))+ " ")
f.write("\n")
for v in encodedvalue:
    f.write(str(v)+ " ")

#ord
#chr

