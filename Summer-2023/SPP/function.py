
def sum(i,j):
    if i<n:
        if j<m:
            c[i][j] = a[i][j] + b[i][j]
            print(c[i][j])
            j = j + 1
            sum(i, j)
        else:
            j=0
            i = i + 1
            sum(i, j)






a=[[4,5,6],
   [7,8,9],
   [10,11,12]]
b=[[1,2,3],
   [4,5,6],
   [7,8,9]]
n=len(a)
m=len(a[0])


c=[[0]*n]*m
print(c)

'''for i in range(n):
    for j in range(m):
        c[i][j]=a[i][j]+b[i][j]
        print(c[i][j])'''

sum(0,0)
#   i j