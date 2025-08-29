meze=open('D:\Coding\Python\UGV\UGV_Lab\Summer-2025\AI\maze.txt')
meze=meze.readlines()
data=[]
for i in meze:
    data.append(list(i))
n=len(data)
m=len(data[0])
S=(6,0)
G=(0,7)
queue=[]
present_index=S
queue.append(S)
final_path=[]

for i in data:
    for j in i:
        print(j,end='')
    print()


while present_index !=G:
    i=present_index[0]
    j=present_index[1]
    data[i][j] = '*'
    if i-1>=0:
        if data[i-1][j]==' ' and (i-1,j) not in queue:
            queue.append((i-1,j))
            final_path.append(((i, j), (i-1,j)))
        elif data[i - 1][j] == 'G':
            final_path.append(((i, j), (i - 1, j)))
            break
    if i+1<n:
        if data[i+1][j]==' ' and (i+1,j) not in queue:
            queue.append((i+1,j))
            final_path.append(((i, j), (i+1,j)))
        elif data[i +1][j] == 'G':
            final_path.append(((i, j), (i + 1, j)))
            break
    if j-1>=0:
        if data[i][j-1]==' 'and (i,j-1) not in queue:
            queue.append((i,j - 1))
            final_path.append(((i, j), (i,j - 1)))
        elif data[i][j - 1] == 'G':
            final_path.append(((i, j), (i, j - 1)))
            break
    if j+1<m:
        if data[i][j+1]==' 'and (i,j+1) not in queue:
            queue.append((i,j +1))
            final_path.append(((i, j), (i,j +1)))
        elif data[i][j +1] == 'G':
            final_path.append(((i, j), (i, j + 1)))
            break

    queue.pop(0)
    present_index=queue[0]
    #final_path.append([[i, j], [i, j + 1]])

parent=G
print(G)
for i in final_path:
    print(i)
for i in range(len(final_path)-1,-1,-1):
    temp=final_path[i][1]
    if parent == temp :
        #print(final_path[i])
        data[temp[0]][temp[1]]='.'
        parent=final_path[i][0]

data[S[0]][S[1]]='S'
data[G[0]][G[1]]='G'
for i in data:
    for j in i:
        print(j,end='')
    print()


from PIL import Image, ImageDraw

maze=data
# Size of each cell
cell_size = 40
rows = len(maze)
cols = max(len(row) for row in maze)

# Create a new image
img = Image.new("RGB", (cols * cell_size, rows * cell_size), color="white")
draw = ImageDraw.Draw(img)

# Define colors for each character
colors = {
    '#': (0, 0, 0),        # Wall - Black
    '.': (100, 255, 100),  # Path - Light Gray
    '*': (255, 200, 200),  # Path - Light Gray
    'S': (150, 150, 150),      # Start - Green
    'G': (255, 0, 0),      # Goal - Red
    ' ': (255, 255, 255)   # Empty - White
}

# Draw each cell
for i, row in enumerate(maze):
    for j, ch in enumerate(row):
        color = colors.get(ch, (255, 255, 255))  # Default to white
        x0 = j * cell_size
        y0 = i * cell_size
        x1 = x0 + cell_size
        y1 = y0 + cell_size
        draw.rectangle([x0, y0, x1, y1], fill=color, outline="gray")

# Save or show the image
img.show()       # Show in default viewer
# img.save("maze.png")  # Or save to a file
