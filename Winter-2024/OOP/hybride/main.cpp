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

class parent1 : virtual public grand_parent
{
    public:
        void show_parent1()
        {
            cout<<"From Parent1"<<endl;
        }
};

class parent2 : virtual public grand_parent
{
    public:
        void show_parent2()
        {
            cout<<"From Parent2"<<endl;
        }
};

class child_1: public parent1, public parent2
{
    public:
        void show_child_1()
        {
            cout<<"From child_1"<<endl;
        }
};




int main()
{
    child_1 oj1;

    oj1.show_child_1();

    oj1.show_parent1();
    oj1.show_parent2();

    oj1.show_grand_parent();
    return 0;
}
