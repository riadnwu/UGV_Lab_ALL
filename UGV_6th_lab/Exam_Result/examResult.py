
def markEntry(word,id,mark,type):
    id.append("1000000000000000")
    length = len(word)
    count = 0
    i = 0;
    html = ""
    while (count < length):
        if (word[count].find(id[i]) != -1):
            # print(word[count])
            html = html + ' ' + word[count]
            count = count + 1
            while (True):
                try:
                    if (word[count].find("value=") != -1):
                        # print(word[count])
                        html = html + 'value="' + mark[i] + '"'
                        count = count + 1
                        break
                except:
                    print("except")
                html = html + ' ' + word[count]
                count = count + 1
            while (True):
                if (word[count].find('type="checkbox"') != -1):
                    # print(word[count])
                    if (int(mark[i]) == 0):
                        html = html + ' ' + word[count]
                        # print(id[i])
                    else:
                        html = html + ' ' + word[count] + ' ' + 'checked="checked"'
                    count = count + 1
                    break
                html = html + ' ' + word[count]
                count = count + 1
            i += 1
        html = html + ' ' + word[count]
        count = count + 1
    print(html)
    output = open(type, "w")
    output.write(html)


data=open("input.txt","rt")
data=data.read()
word=data.split(" ")

mark=open("id_mark.txt","rt")
mark=mark.read()
mark=mark.split("\n")
leng=len(mark)
id=[]
mid=[]
final=[]
att=[]
ct=[]
ass=[]
for i in range (0,leng):
  temp=mark[i].split("\t")
  #print(temp[1])
  id.append(temp[0])
  try:
     mid.append(temp[1])
     final.append(temp[2])
     att.append(temp[3])
     ct.append(temp[4])
     ass.append(temp[5])
  except:
      print("New Line")
#print(mark)
#print(id)
#print(allMark)

allMark=[]
allMark.append(mid)
allMark.append(final)
allMark.append(att)
allMark.append(ct)
allMark.append(ass)
type=['mid.txt','final.txt','att.txt','ct.txt','ass.txt']
for i in range(0,5):
    print(allMark[i])
    markEntry(word,id,allMark[i],type[i])