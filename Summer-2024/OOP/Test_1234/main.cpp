#include <iostream>

using namespace std;

int main()
{
    static int n;
    cin>>n;
    int a[n],b[n];
    for(int j=0;j<n;j++)
    {
        cin>>a[j]>>b[j];
    }
    for(int j=0;j<n;j++)
    {
        int i=1,max1=0,min1=0,count1=0;

        if(a[j]<b[j])
        {
            max1=b[j];
            min1=a[j];
        }
        else if(a[j]>b[j])
        {
            max1=a[j];
            min1=b[j];
        }

        while(max1!=min1)
        {
            if(min1+i>max1)
            {
                max1=max1+i;
            }
            else if(min1+i<max1)
            {
                min1=min1+i;
            }
            else if(min1+i==max1)
            {
                min1=min1+i;
            }
            else if(min1==max1+1)
            {
                max1=max1+i;
            }
            i++;
            count1++;
        }

        cout<<count1<<endl;
    }
    return 0;
}
