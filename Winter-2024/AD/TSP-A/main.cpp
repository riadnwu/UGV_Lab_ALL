#include <iostream>
#define n 4

using namespace std;



int main()
{
    int data[n][n]={{0,30,20,15},
                    {30,0,25,35},
                    {20,25,0,30},
                    {15,35,30,0}};

    int initalIndex=0,lastIndex=0,totalCost=0;
    int visit[n]={1,0,0,0},countVisit=1;
    cout<<lastIndex<<"->";

    while(countVisit!=n)
    {
        int minValue=10000,minIndex=0;
        for(int i=1;i<n;i++)
        {
            if(data[lastIndex][i]<minValue && data[lastIndex][i]!=0 &&visit[i]==0 )
            {
                minValue=data[lastIndex][i];
                minIndex=i;
            }
        }
        lastIndex=minIndex;
        countVisit=countVisit+1;
        visit[minIndex]=1;
        totalCost=totalCost+minValue;
        cout<<lastIndex<<"->";

    }

    while(lastIndex!=initalIndex)
    {
        int minValue=10000,minIndex=0;
        for(int i=0;i<n;i++)
        {
            if(data[lastIndex][i]<minValue && data[lastIndex][i]!=0)
            {
                minValue=data[lastIndex][i];
                minIndex=i;
            }
        }
        lastIndex=minIndex;
        totalCost=totalCost+minValue;
        cout<<lastIndex<<"->";
    }
    cout<<"\nTotal Cost:"<<totalCost<<endl;
    return 0;
}
