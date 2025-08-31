import copy
def find_zero(p_state):
    x=0
    while True:
        if 0 in p_state[x]:
            y=p_state[x].index(0)
            return x,y
        else:
            x=x+1

def position_check():
    while queue[0]!= t_state:
        print(queue[0])
        print('@@@@@@@@@@@@@@@@')
        index=[[1,0],[-1,0],[0,1],[0,-1]]

        x, y =find_zero(queue[0])
        for a in index:
            i=a[0]+x
            j=a[1]+y
            if i>=0 and j>=0 and i<n and j<n:
                temp_state =copy.deepcopy(queue[0])
                temp_state[x][y] =temp_state[i][j]
                temp_state[i][j] =0
                print(temp_state)

                if temp_state in pop_list:
                    a=1
                elif temp_state == t_state:
                    print(temp_state)
                    print("result Found")
                    return 0
                else:
                    queue.append(temp_state)
                    pop_list.append(temp_state)
        queue.pop(0)
        print('-------------')
    print(queue[0])




p_state=[[1,2,3],[4,5,6],[7,8,0]]
t_state=[[1,3,0],[6,2,4],[7,5,8]]
print(t_state)
print('+++++++++++++++++++++++++')
n=len(p_state)
queue=[]
pop_list=[]
queue.append(p_state)
pop_list.append(p_state)
position_check()
