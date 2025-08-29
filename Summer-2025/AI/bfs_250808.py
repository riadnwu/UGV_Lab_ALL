maze=open('maze.txt')
maze= [list(i) for i in maze.readlines()]
n=len(maze)
m=len(maze[0])
G=[0,8]
S=[6,0]
queue=[]
index=S
queue.append(index)

while index !=G:
    #print(queue)
    queue.pop()
    i=index[0]
    j=index[1]
    if i-1>-1:
        if maze[i-1][j] == ' ':
            queue.append([i-1,j])
            maze[i - 1][j] = '.'
        elif maze[i-1][j] == 'G':
            break
    if i + 1 < n - 1:
        if maze[i+1][j] == ' ':
            queue.append([i+1,j])
            maze[i + 1][j] = '.'
        elif maze[i+1][j] == 'G':
            break

    if j + 1 < m-1:
        if maze[i][j+1] == ' ':
            queue.append([i,j+1])
            maze[i][j+1] = '.'
        elif maze[i][j+1] == 'G':
            break
    if j-1>-1:
        if maze[i][j-1] == ' ':
            queue.append([i,j-1])
            maze[i][j-1] = '.'
        elif maze[i][j-1] == 'G':
            break
    print(queue[0])

    index=queue[-1]
for k in maze:
    for l in k:
        print(l, end='')
    print()

from PIL import Image, ImageDraw


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
    '.': (255, 200, 200),  # Path - Light Gray
    'S': (0, 255, 0),      # Start - Green
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


