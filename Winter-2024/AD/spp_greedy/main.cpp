#include <iostream>

using namespace std;

int main()
{
    int data[4][4]={{0,10,12,20},
                    {0,0,0,5},
                    {0,3,0,15},
                    {0,0,0,0}};
    char c[4]={'A','B','C','D'};
    int iin=0,din=3,n=4;
    cout<<c[iin]<<"->";
    while(iin!=din)
    {

        int mV=1000000,mIn;
        for(int i=0;i<n;i++)
        {
            if(data[iin][i]<mV && data[iin][i] !=0)
            {
                mV=data[iin][i];
                mIn=i;
            }
        }
        //cout<<mV<<endl;
        iin=mIn;
        cout<<c[iin]<<"->";
    }

    return 0;
}
