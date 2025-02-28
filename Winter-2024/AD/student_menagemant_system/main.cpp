#include <iostream>
#define n 4
using namespace std;

int visit(int visited[])
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=temp+visited[i];
    }
    return temp;
}


int main()

{
    int data[n][n]={{0,10,45,20},
                    {10,0,28,25},
                    {45,28,0,30},
                    {20,25,30,0}};
    int visited[n]={1,0,0,0};
    int initialIndex=0,lastIndex=0;
    cout<<initialIndex<<endl;

    while(visit(visited)<n)
    {
        int minValue=1000000000,minINdex=lastIndex;
        for(int i=1;i<n;i++)
        {
            if(data[lastIndex][i]<minValue && visited[i]==0 && data[lastIndex][i]!=0)
            {
                minValue=data[lastIndex][i];
                minINdex=i;
            }
        }
        lastIndex=minINdex;
        visited[minINdex]=1;
        cout<<lastIndex<<endl;
    }

    while(lastIndex!=initialIndex)
    {
        int minValue=1000000000,minINdex=lastIndex;
        for(int i=0;i<n;i++)
        {
            if(data[lastIndex][i]<minValue && data[lastIndex][i]!=0)
            {
                minValue=data[lastIndex][i];
                minINdex=i;
            }
        }
        lastIndex=minINdex;
        cout<<lastIndex<<endl;
    }


return 0;
}
