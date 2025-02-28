#include <iostream>

using namespace std;


class A
{
    public:
        void show_a()
        {
            cout<<"A"<<endl;
        }
};

class B:public A
{
    public:
        void show_b()
        {
            cout<<"B"<<endl;
        }
};

class C:public A
{
    public:
        void show_c()
        {
            cout<<"C"<<endl;
        }
};

class D:public B,public C
{
    public:
        void show()
        {
            cout<<"D"<<endl;
        }
};

int main()
{
    D oj;
    oj.show();
    oj.show_b();
    oj.show_c();
    oj.C::show_a();
    return 0;
}
