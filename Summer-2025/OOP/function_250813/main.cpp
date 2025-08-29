#include <iostream>

using namespace std;



int a=10;

void test()
{
      a=20;
    cout<<&a<<endl;
}

void test1()
{
    cout<<&a<<endl;
}

int main( int a)
{
    test();
    test1();
    return 0;
}
