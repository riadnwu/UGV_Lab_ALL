
#matrix=[[0]*3]*3
matrix=[]
for i in range(0,3):
    matrix.append([])
    for j in range(0, 3):
        matrix[i].append(i+j)
print(matrix)
newData=[0, 1, 2]
matrix.append(newData)
print(matrix)
matrix.pop(2)
print(matrix)