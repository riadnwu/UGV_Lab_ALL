#include <iostream>

using namespace std;

void referenceVariable (int &x,int &y,int &z)
{
    x=25;
    y=30;
    z=35;
}
int main()
{
    int a=10,b=15,c=20;
    referenceVariable(a,b,c);
    cout<<"a: "<<a<<" b: "<<b<<" c: "<<c;
    return 0;
}
