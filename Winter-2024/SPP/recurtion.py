def abc(i):

    if i>0:
        print(str(i)+' Hello World!!')
        i = i - 1
        abc(i)
        print(str(i) + ' Hello World!!')

i=100
abc(i)