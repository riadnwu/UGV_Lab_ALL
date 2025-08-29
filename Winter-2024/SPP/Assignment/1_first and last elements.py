data=[25,35,29,35,38,25,35,29,35,38]
#     0  1  2  3  4  5  6  7  8  9


firstIndex=0
lastIndex=len(data)-1

a=data[firstIndex]  #25
b=data[lastIndex]   #38

data[firstIndex]=b
data[lastIndex]=a

print(data)


