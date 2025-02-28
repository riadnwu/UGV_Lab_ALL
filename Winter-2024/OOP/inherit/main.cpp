#include <iostream>

using namespace std;

class sum_class//Base
{
    public:
        void sum(int a,int b)
        {
            cout<<a+b<<endl;
        }
};

class sub_class//Base
{
    public:
        void sub(int a,int b)
        {
            cout<<a-b<<endl;
        }
};


class multi_class//Base
{
    public:
        void multi(int a,int b)
        {
            cout<<a*b<<endl;
        }
};


class cal : public sum_class, public sub_class, public multi_class//Drive
{

};



int main()
{
   cal oj;
   oj.sum(10,20);
   oj.sub(10,20);
   oj.multi(10,20);


    return 0;
}
