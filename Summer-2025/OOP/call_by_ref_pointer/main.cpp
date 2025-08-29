#include <iostream>

using namespace std;

int* sum(int *a, int *b)
{
    cout<<&a<<endl;
    *a=20;
    int c=*a+*b;
    cout<<&c<<endl;
    return &c;
}

int main()
{
    int a=10,b=20;

    cout<<&a<<endl;
    //int c=;
    cout<<sum(&a,&b)<<endl;
    cout<<a<<endl;

    return 0;
}
