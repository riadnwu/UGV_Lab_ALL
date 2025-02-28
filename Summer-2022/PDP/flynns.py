a=[10,20,30,40]
b=[20,40,60,80]

for i in range(4):
    ins = input()
    if ins == '*':
      print(str(a[i])+'*'+str(b[i])+'= ' + str(a[i]*b[i]))
    elif ins == '+':
        print(str(a[i]) + '+' + str(b[i]) + '= ' + str(a[i] + b[i]))
    elif ins == '-':
        print(str(a[i]) + '-' + str(b[i]) + '= ' + str(a[i] - b[i]))
    elif ins == '/':
        print(str(a[i]) + '/' + str(b[i]) + '= ' + str(a[i] / b[i]))