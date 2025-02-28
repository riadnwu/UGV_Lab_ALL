#include <iostream>

using namespace std;

class sum
{
    private:
        int a,b;
    public:
        sum()
        {
            a=10;
            b=20;
        }

        sum(sum &oj)// copy const
        {
           a=oj.a+1;
           b=oj.b+1;
        }
        void show_add()
        {
            cout<<a+b<<endl;
        }
};


int main()
{
    sum oj;
    oj.show_add();

    sum oj2(oj);

    oj2.show_add();

    return 0;
}
