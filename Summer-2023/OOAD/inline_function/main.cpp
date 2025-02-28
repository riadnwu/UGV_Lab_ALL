#include <iostream>

using namespace std;

inline int sum(int a,int b)
{
    up:
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
        switch(i)
            {
                case 1:
                cout<<i<<endl;
                break;
                case 2:
                cout<<i<<endl;
                break;
            }


        goto up;
    }
    return a+b;
}

int main()
{
    cout << sum(10,20) << endl;
    return 0;
}
