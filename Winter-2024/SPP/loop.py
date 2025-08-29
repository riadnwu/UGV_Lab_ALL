data=[25,35,29,35,38,25,35,29,35,38]


#     0  1  2  3  4
value=35
even=[]
odd=[]
for i in range(0,10,1):
    if data[i]%2==0:
        even.append(data[i])
        print(' Even')
    else:
        odd.append(data[i])
        print('Odd')

print(even)
print(odd)
