import numpy as np
from scipy.integrate import quad


def q_over(index,flag):
    x=index[0]
    y=index[1]
    condition=((1,0),(0,1),(-1,0),(0,-1),(-1,-1),(1,1),(-1,1),(1,-1))
    if flag==1:
        bord[x][y]=-1
    else:
        bord[x][y] = 0
    for a in condition:
        i = x +a[0]
        j =y+a[1]
        while(i<n and j<n and i>=0 and j>=0 and bord[i][j]!=-1):
            if flag ==1:
                bord[i][j]=bord[i][j]+1
            else:
                bord[i][j] = bord[i][j]-1
            i = i + a[0]
            j =j + a[1]

def n_queen(q_count):
    flag=0
    if q_count==n:
        return 1
    free_index=np.where(bord[q_count]==0)
    free_index=free_index[0].tolist()

    while len(free_index)!=0:
        i=free_index[0]
        free_index=np.delete(free_index,0)

        q_over((q_count,i),1)
        flag=n_queen(q_count+1)
        if flag==1:
            return 1
        q_over((q_count, i), 0)

import numpy as np
from PIL import Image, ImageDraw, ImageFont

def display(board):
    n = board.shape[0]
    cell_size = 80
    img_size = n * cell_size

    # Create blank image
    img = Image.new("RGB", (img_size, img_size), "white")
    draw = ImageDraw.Draw(img)

    # Load font
    try:
        font = ImageFont.truetype("arial.ttf", 30)
    except:
        font = ImageFont.load_default()

    for i in range(n):
        for j in range(n):
            x0, y0 = j * cell_size, i * cell_size
            x1, y1 = x0 + cell_size, y0 + cell_size

            # Chessboard pattern
            fill = (240, 240, 240) if (i + j) % 2 == 0 else (180, 180, 180)
            draw.rectangle([x0, y0, x1, y1], fill=fill, outline="black")

            value = board[i, j]
            if value == -1:  # queen
                draw.text((x0 + cell_size//3, y0 + cell_size//4), "Q", fill="red", font=font)
            elif value > 0:  # overlap number
                # Use textbbox for proper centering
                bbox = draw.textbbox((0, 0), str(value), font=font)
                w, h = bbox[2] - bbox[0], bbox[3] - bbox[1]
                draw.text((x0 + (cell_size - w)//2, y0 + (cell_size - h)//2),
                          str(value), fill="black", font=font)

    img.show()





n=25
bord=np.zeros((n,n),dtype=int)
print(bord)

n_queen(0)
print(bord)

display(bord)
