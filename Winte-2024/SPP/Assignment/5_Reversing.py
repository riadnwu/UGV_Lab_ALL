data=[25,35,29,35,38,25,35,29,35,38]
#     0  1  2  3  4  5  6  7  8  9
reversData=[]
for i in range(len(data)-1,-1,-1):
    reversData.append(data[i])
print(reversData)
