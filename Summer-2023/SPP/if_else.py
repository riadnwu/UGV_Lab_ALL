from PIL import Image
import requests

# Open the image from the URL
stID=open('st_id.txt','r')
stID=stID.read().split('\n')
count=0;
for id in stID:
    # Save the image with a desired filename
    try:
        im = Image.open(requests.get('https://webportal.ugv.edu.bd/Studentphoto/'+str(id)+'.JPG', stream=True).raw)
        im.save('G:/Coding/Python/UGV/Summer-2023/SPP/Student Image/'+str(id)+'.JPG')
        count+=1
        print(count)
    except:
        print(str(id)+" :error!!")
print(count)