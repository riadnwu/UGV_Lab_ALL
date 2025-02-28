#include <iostream>

using namespace std;

class sum
{
    public:
        void show(int a)
        {
            cout<<a<<endl;

        }
};

int main()
{
    sum oj2;
    oj2.show(100);

    sum *oj=new sum(); // heap
    oj->show(10);

    sum oj1;   //stack

    sum *pt;

    pt=&oj1;

    pt->show(30);



    return 0;
}
