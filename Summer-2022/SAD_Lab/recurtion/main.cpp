#include <iostream>

using namespace std;
 int i=0;
void recurtion(int i)
{
    i++;
    if (i<10)
    {
       recurtion(i);
    }
    cout<<i<<endl;
}


int main()
{
    cout<<i<<endl;
    i++;
    if(i<1000000)
    {
        main();
    }
    return 0;
}
