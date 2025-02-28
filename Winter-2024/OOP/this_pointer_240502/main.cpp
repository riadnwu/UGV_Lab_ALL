#include <iostream>

using namespace std;

class sum
{
    private:
        int a;
    public:
        sum()
        {
            a=10;
        }
        void show(int a)
        {
            cout<<a<<endl;
            cout<<this->a<<endl;
        }
};

int main()
{
    sum oj;
    oj.show(30);

    sum *oj1=new sum();
    oj1->show(20);


    sum oj3;
    sum *pt;
    pt=&oj3;

    pt->show(40);




    return 0;
}
