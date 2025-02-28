#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int value=15;
    int data[5]={22,24,11,12,15};
    //          0   1  2  3 4

    for(int i=0;i<n;i++)
    {
        if(data[i]==value)
        {
           cout<<"Found..."<<i<<endl;
           break;
        }
    }
    return 0;
}
