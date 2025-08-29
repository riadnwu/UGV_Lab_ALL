
def show_data(data):

    data.append(10)
    data.append(20)
    data.append(30)
    print('inside Func')
    print(data)



data=[1,2,3,4]
show_data(data)

print('outside Func')
print(data)