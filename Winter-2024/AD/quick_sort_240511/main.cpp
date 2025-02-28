//Md. Riadul islam
//11/05/24
#include <iostream>
#define n 13

using namespace std;
//           l        mid mid+1   r
//           0  1  2  3  4  5  6
int data[n]={54,24,100,7,10,62,13,1,3,87,8,9,11};


int pivot(int l,int r)
{
    int pvot=r;
    int i=l;
    int j=r-1;

    while(i<=j)
    {
        while(data[i]<data[pvot])
        {
            i++;
        }
        while(data[j]>data[pvot])
        {
            j--;
        }
        if(i<j)
        {
            int temp=data[i];
            data[i]=data[j];
            data[j]=temp;
            i++;
            j--;
        }
    }

    int temp=data[i];
    data[i]=data[pvot];
    data[pvot]=temp;
    return i;
}

void quick_sort(int l, int r)
{
    int pvot;
    if(l<r)
    {

       pvot=pivot(l,r);
       cout<<pvot<<endl;
       quick_sort(l,pvot-1);
       quick_sort(pvot+1,r);
    }

}


int main()
{
    int l=0;

    int r=n-1;
    quick_sort(l,r);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}
