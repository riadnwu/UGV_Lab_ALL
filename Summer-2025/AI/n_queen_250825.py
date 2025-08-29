import numpy as np
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
def queen_position(index,queen):
    all_index=((1,0),(-1,0),(0,1),(0,-1),(1,1),(-1,-1),(1,-1),(-1,1))
    add=0
    if queen == 1:
        add = 1
        chess[index[0]][index[1]] = -1
    else:
        add = -1
        chess[index[0]][index[1]] = 0

    for i in range(len(all_index)):
        #print(all_index[i])
        x = index[0]+all_index[i][0]
        y = index[1]+all_index[i][1]
        while(x>=0 and x<n and y>=0 and y<n and  chess[x][y]>-1):
            chess[x][y]=chess[x][y]+add
            x = x + all_index[i][0]
            y = y + all_index[i][1]

def n_queen(queen_count):
    if queen_count == n:
        return 1
    free_index=np.where(chess[queen_count]==0)
    free_index=free_index[0].tolist()
    while np.size(free_index)!=0:
        print(free_index)
        print('Q:'+str(queen_count))
        i = free_index[0]
        free_index=np.delete(free_index,0)
        queen_position([queen_count, i],1)
        #chess_print()
        flag=n_queen(queen_count+1)
        #print(flag)
        if flag !=1:
            queen_position([queen_count, i], 0)
        else:
            return 1

def chess_print():
    for i in chess:
        for j in i:
            print(j, end=' ')
        print()
    print('---------------')


n=15
chess=np.zeros((n,n),dtype=int)
flag=queen_count=n_queen(0)
chess_print()

display(chess)
