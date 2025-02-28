#include <iostream>

using namespace std;


void recur(int i)
{
    cout<<i<<endl;
    if(i<100)
    {
       i++;
       recur(i);
    }

}

int main()
{

    //recur(0);
    int a;

    cin>>a;
    cout<<a;

    for(int i=0;i<a;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
