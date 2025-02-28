mark=90

if mark >=80 and mark<=100:
    if mark==100:
        print('Prize')
    elif mark==90:
        print('2nd Prize')
    print('A+')
elif mark >=70 and mark<=79:
    print('A')
elif mark >=60 and mark<=69:
    print('A-')
elif mark >=50 and mark<=59:
    print('B')
else:
    print('F')