try:
    data=[1,2,3,4,5]
    print(data[3])
    a=10
    b=100
    c=a/b
    file=open('data.txt',"r")
    data=file.read()
    print(data)

except IndexError:
    print("IndexError")
except ZeroDivisionError:
    print("Zero")
except IOError:
    print("File not found!!")

print("All ok")