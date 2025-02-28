#include <iostream>

using namespace std;

int main()
{
    int data[5]={12,24,11,25,26};
    int value=12;

    for(int i=0;i<5;i++)
    {
        if(data[i]==value)
        {
            cout<<"Success!!"<<endl;
            break;
        }
    }
    return 0;
}
