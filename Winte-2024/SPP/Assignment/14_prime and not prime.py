data=[25,35,29,35,38,25,350,29,35,1,38]
#     0  1  2  3  4  5  6  7  8  9

value=71
check=0
for i in range(2,value):
    if value%i==0:
        print(i)
        print("Not Prime Number")
        check=1
        break

if check==0:
    print("Prime Number")
