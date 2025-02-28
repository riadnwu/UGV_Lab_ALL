#include <iostream>

using namespace std;

class grand_parent
{
    public:
        void show_grand_parent()
        {
            cout<<"From Grand Parent"<<endl;
        }
};

class parent : public grand_parent
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

    oj1.show_child_1();
    oj2.show_child_2();

    oj1.show_parent();
    oj2.show_parent();

    oj1.show_grand_parent();
    oj2.show_grand_parent();
    return 0;
}
