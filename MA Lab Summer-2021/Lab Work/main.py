dict_size = 256
dictionary = {chr(i): i for i in range(dict_size)}

b = ""
result = []

encode = 'abbaabb'
print(encode)
for c in encode:
    a = b + c
    if a in dictionary:
        b = a
    else:
        result.append(dictionary[b])
        dictionary[a] = dict_size
        dict_size += 1
        b = c

if b:
    result.append(dictionary[b])

print(result)
print(dictionary)