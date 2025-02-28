#include <iostream>

using namespace std;

class parent
{
    public:
        void show_parent()
        {
            cout<<"From Parent"<<endl;
        }
};

class child_1: public parent
{
    public:
        void show_child_1()
        {
            cout<<"From child_1"<<endl;
        }
};
class child_3: public parent
{
    public:
        void show_child_3()
        {
            cout<<"From child_3"<<endl;
        }
};
class child_2: public parent
{
    public:
        void show_child_2()
        {
            cout<<"From child_2"<<endl;
        }
};


int main()
{
    child_1 oj1;
    child_2 oj2;
    child_3 oj3;

    oj1.show_child_1();
    oj2.show_child_2();
    oj3.show_child_3();

    oj1.show_parent();
    oj2.show_parent();
    oj3.show_parent();
    return 0;
}
