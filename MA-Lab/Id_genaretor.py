import os
def set_data(path,data):
    try:
        data=data.split('_')
        print(data)
        file = open(path, 'a',encoding = 'utf-8')
        file.write(data[0]+','+data[1]+'\n')
        file.close()
    except:
        pass

path = r"G:\UGV\Student\Student New\winter-2023"
dir_list = os.listdir(path)

for i in dir_list:
    try:
        #os.rename(path+'\\'+i,path+'\\'+i.split('_')[1])
        set_data('winter-2023.csv',(i.split('.')[0]))
    except:
        pass

