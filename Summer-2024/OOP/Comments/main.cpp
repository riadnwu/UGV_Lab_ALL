#include<iostream>
using namespace std;
int i=0;
void main()
{
    if(i<100)
    {
        cout<<i<<endl;
        i++;
        main();
    }

    return 0;
}
