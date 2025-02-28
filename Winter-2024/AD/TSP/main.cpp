#include <iostream>
#define n 4
using namespace std;

int visit_count(int visit[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=count+visit[i];
    }
    return count;
}

int main()
{
    int data[n][n]={{0,10,20,45},
                    {10,0,25,35},
                    {20,25,0,30},
                    {45,35,30,0}};

    int initialIndex=0,presentIndex=0,visit[n]={1,0,0,0};
    cout<<presentIndex<<endl;

    while(visit_count(visit)<n)
    {
        int minValue=100000,minIndex=0;
        for(int i=1;i<n;i++)
        {
            if(data[presentIndex][i]<minValue && visit[i]==0 && data[presentIndex][i]!=0)
            {
                minValue=data[presentIndex][i];
                minIndex=i;
            }
        }
        visit[minIndex]=1;
        presentIndex=minIndex;
        cout<<presentIndex<<endl;
    }

    while(presentIndex!=initialIndex)
    {
        int minValue=100000,minIndex=0;
        for(int i=0;i<n;i++)
        {
            if(data[presentIndex][i]<minValue && data[presentIndex][i]!=0)
            {
                minValue=data[presentIndex][i];
                minIndex=i;
            }
        }
        presentIndex=minIndex;
        cout<<presentIndex<<endl;
    }
    return 0;
}
