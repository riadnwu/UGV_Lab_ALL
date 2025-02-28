//Md. Riadul islam
//07/05/24

#include <iostream>
#include<queue>
#define n 9

using namespace std;
//           l        mid mid+1   r
//           0  1  2  3  4  5  6
int data[n]={54,24,7,10,62,13,8,9,11};


void marg_sor(int l1,int r1, int l2, int r2)
{
    queue <int> tempData;
    int beg=l1;
    int end1=r2;
    while(l1<=r1 && l2<=r2)
    {
        if(data[l1]<data[l2])
        {
            tempData.push(data[l1]);
            l1++;
        }
        else
        {
            tempData.push(data[l2]);
            l2++;
        }
    }

    for (int i=l1;i<=r1;i++)
    {
        tempData.push(data[i]);
    }
    for (int i=l2;i<=r2;i++)
    {
        tempData.push(data[i]);
    }

    for(int i=beg;i<=end1;i++)
    {
        data[i]=tempData.front();
        tempData.pop();
        cout<<data[i]<<" ";
    }
    cout<<endl;

}

void marge(int l, int r)
{
    if(l<r)
    {
       int mid= (l+r)/2;
       marge(l,mid);
       marge(mid+1,r);
       cout<<l<<" "<<r<<endl;
       marg_sor(l,mid,mid+1,r);
    }

}


int main()
{
    int l=0;

    int r=n-1;
    marge(l, r);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}
