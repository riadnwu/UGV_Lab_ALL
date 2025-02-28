def div(a,b):
    try:
        print(a/b)
    except ZeroDivisionError:
        print(ZeroDivisionError)
    except :
        print("Error")
    print("ok")
