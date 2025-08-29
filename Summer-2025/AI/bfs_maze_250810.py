from numba.cuda import popc

maze=open('maze.txt')
data=[]
for i in maze.readlines():
    data.append(list(i))
n=len(data)
m=len(data[0])
S=[6,0]
G=[0,7]
queue=[]
present_index=S
queue.append(present_index)
print(data[0][3])
print(n)
print(m)
for i in data:
    for j in i:
        print(j,end='')
    print()

while present_index!=G:
    i=int(present_index[0])
    j=int (present_index[1])
    queue.pop(0)
    data[i][j] = '.'
    if i-1>=0:
        if data[i-1][j]==' ':
            queue.append([i-1,j])
        elif data[i-1][j]=='G':
            break
    if i+1< n:
        if data[i+1][j]==' ':
            queue.append([i+1,j])
        elif data[i+1][j]=='G':
            break
    if j-1>=0:
        if data[i][j-1]==' ':
            queue.append([i,j-1])
        elif data[i][j-1]=='G':
            break
    if j+1<m:
        if data[i][j+1]==' ':
            queue.append([i,j+1])
        elif data[i][j+1]=='G':
            break

        present_index=queue[0]

for i in data:
    for j in i:
        print(j,end='')
    print()


