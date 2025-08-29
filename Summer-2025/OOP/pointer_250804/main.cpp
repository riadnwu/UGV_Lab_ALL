#include <iostream>
#include<string>
using namespace std;


int main()
{
    string s;
    int a=10,b=30;
    const int*  a_add=&a;
    cout<<a<<endl;
    a_add=&b;
    *a_add=20;
    cout<<a<<endl;


    return 0;
}
