#include <iostream>

using namespace std;

int main()
{
    int data[3]={10,5,4};
    int tValue=18,i=0;

    while(tValue>0 && i<3)
    {
        if(tValue>=data[i] )
        {
            tValue=tValue-data[i];
            cout<<data[i]<<"--";
        }
        else
        {
            i++;
        }
    }

    if(tValue<0)
    {
        cout<<"Not Possiable:"<<tValue<<endl;
    }
    return 0;
}
