#include <iostream>

using namespace std;

int main()
{
    int graph[8][8]={{0,15,5,25,0,0,0,0},
                    {0,0,0,0,11,0,0,0},
                    {0,0,0,0,0,2,0,20},
                    {0,0,0,0,0,0,13,0},
                    {0,0,0,0,0,0,0,27},
                    {0,0,0,0,0,0,0,7},
                    {0,0,0,0,0,19,0,0},
                    {0,0,0,0,0,0,0,0},
                    };

    int index=0,finalIndex=7;
    while(true)
    {
        int minValue=10000000000,tempIntdex=index;
        for(int i=0;i<8;i++)
        {
            if(minValue>graph[index][i] && graph[index][i]!=0)
            {
                minValue=graph[index][i];
                tempIntdex=i;
            }
        }

        index=tempIntdex;
        cout<<"Index: "<<index<<"  "<<"MIn Value: "<<minValue<<endl;
        if(index==finalIndex)
        {
            break;
        }
    }

    return 2;
}
