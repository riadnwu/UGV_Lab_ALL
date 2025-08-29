#include <iostream>

using namespace std;

int* sum(int &a,int &b)
{
    return &a;
}

int main()
{
    int a=10,b=20;
    int *p;
    sum(a,b)=30;
    cout <<p << endl;
    return 0;
}
