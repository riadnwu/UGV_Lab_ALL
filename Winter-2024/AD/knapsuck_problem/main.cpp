//Md. Riadul islam
//11/05/24
#include <iostream>
#include<algorithm>
#define n 5

using namespace std;




int main()
{
    float size1[n]={2,3,4,5,6};
    double price[n]={2,2.4,1,1.8,1.5};
    double ratio1[n];
    double tergate=15;
    double profit=0;

    for(int i=0;i<n;i++)
    {
        ratio1[i]=price[i]/size1[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ratio1[j]<ratio1[j+1])
            {
                swap(ratio1[j],ratio1[j+1]);
                swap(size1[j],size1[j+1]);
                swap(price[j],price[j+1]);
            }
        }
    }

    int i=0;

    while(tergate>0)
    {
        if(size1[i]<tergate)
        {
            profit=profit+price[i];
            tergate=tergate-size1[i];
            cout<<size1[i]<<"-"<<price[i]<<endl;
        }
        else
        {
            cout<<tergate<<"-"<<(price[i]*tergate)/size1[i]<<endl;
            profit=profit+(price[i]*tergate)/size1[i];
            tergate=0;
        }
        i++;
    }

    cout<<"Profit: "<<profit<<endl;
    return 0;
}
