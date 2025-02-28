#include <iostream>

using namespace std;


int main()
{
    int n=8;
    int grap[8][8]={
        {0,5,10,25,0,0,0,0},
        {0,0,0,0,11,0,0,0},
        {0,0,0,0,0,2,0,20},
        {0,0,0,0,0,0,13,0},
        {0,0,0,0,0,0,0,27},
        {0,0,0,0,0,0,0,7},
        {0,0,0,0,0,19,0,0},
        {0,0,0,0,0,0,0,0}};

    int beg=0,end1= n-1,pos=0,maxPos=0;
    while(true)
    {
        int maxValue=10000000000000;
        for(int i=0;i<n;i++)
        {
            if(maxValue>grap[pos][i] && grap[pos][i]!=0)
            {
                maxValue=grap[pos][i];
                maxPos=i;
            }
        }
        pos=maxPos;

        cout<<"pos: "<<pos<<" value: "<<maxValue<<endl;

        if(pos==end1)
        {
            break;
        }
    }


    return 0;
}
