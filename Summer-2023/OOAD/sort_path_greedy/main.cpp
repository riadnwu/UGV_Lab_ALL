#include <iostream>

using namespace std;

int main()
{

    int graph[8][8]={{0,15,10,5,0,0,0,0},
                    {0,0,0,0,11,0,0,0},
                    {0,0,0,0,0,0,2,20},
                    {0,0,0,0,0,13,0,0},
                    {0,0,0,0,0,0,0,27},
                    {0,0,0,0,0,0,19,0},
                    {0,0,0,0,0,0,0,7},
                    {0,0,0,0,0,0,0,0},
                    };

    int index=0,endIndex=7;
    while(true)
    {
        int tempindex=index,minVal=100000000;
        for(int i=0;i<8;i++)
        {
            if(graph[index][i]<minVal && graph[index][i]!=0)
            {
                minVal=graph[index][i];
                tempindex=i;
            }

        }
        index=tempindex;
        cout<<"Index: "<<index<<"  Min Valu:"<<minVal<<endl;
     if(index==7)
     {
         break;
     }
    }
    return 0;
}
