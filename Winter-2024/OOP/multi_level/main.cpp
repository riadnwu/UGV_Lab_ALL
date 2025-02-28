#include <iostream>

using namespace std;

class garant
{
    public:
        void show_garant()
        {
            cout<<"From Garant Parent Class"<<endl;
        }
};

class parent: public garant
{
    public:
        void show_parent()
        {
            cout<<"From Parent Class"<<endl;
        }
};

class child_1 : public parent
{
    public:
        void show_Child_1()
        {
            cout<<"From Child Class 1"<<endl;
        }
};




int main()
{
    child_1 oj1;

    oj1.show_Child_1();
    oj1.show_parent();
    oj1.show_garant();
    return 0;
}
