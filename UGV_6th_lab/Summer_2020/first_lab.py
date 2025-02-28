#1. variable / arr
'''2. input->cin->
3. print-cout
4.if/switch
5.for/do/while/'''

arr=[[4,6,9,3,7,5,6],[4,6,9,3,7,5,6],[4,6,9,3,7,5,6],[4,6,9,3,7,5,6]]
arr1=[[4,6,9,3,7,5,6],[4,6,9,3,7,5,6],[4,6,9,3,7,5,6],[4,6,9,3,7,5,6]]
value=''
for i in range(0,len(arr)):
    for j in range(0, len(arr)) :
            value+=" "+str(arr[i][j])
    value += "\n"
print(value)
