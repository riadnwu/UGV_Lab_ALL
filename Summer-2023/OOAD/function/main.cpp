#include <iostream>

using namespace std;

void swap1(int *a,int b=10)
{
    *a=*a+*b;//10+25=35
    *b=*a-*b;//35-25=10
    *a=*a-*b;//35-10=25

    cout<<"From Swap Function:"<<endl;
    cout<<*a<<endl;
    cout<<"A:"<<*a<<endl;
    cout<<"B:"<<*b<<endl;

    return &a

}

int main()
{
    int a=10,b=25;

    swap1(&a,&b);
    cout<<"From Main Function:"<<endl;
    cout<<&a<<endl;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
    return 0;
}
