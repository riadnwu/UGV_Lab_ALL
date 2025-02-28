#include <iostream>

using namespace std;

int main()
{
    int data[5]={51,13,11,14,16};
    //            0  1  2 3   4
    int fin=511;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(data[i]==fin)
        {
            cout<<"Value Found.. "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Not!!!:"<<endl;
    }

    return 0;
}
