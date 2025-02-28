#include <iostream>

using namespace std;

// single

class old
{
    public:
        void display_old()
        {
            cout<<"display_old"<<endl;
        }

};

class new1 : public old
{

     public:
            void display_new()
            {
                cout<<"display_new"<<endl;
                display_old();
            }
};



///	Multiple Inheritance


class old1
{
    public:
        void display_old1()
        {
            cout<<"display_old1"<<endl;
        }
};

class old2
{
    public:
        void display_old2()
        {
            cout<<"display_old2"<<endl;
        }
};

class new11 : public old1, public old2
{
     public:
            void display_new()
            {
                cout<<"display_new"<<endl;
                display_old1();
                display_old2();
            }
};

///Hierarchical  Inheritance

class oldCl
{
    public:
        void display_oldCl()
        {
            cout<<"display_old"<<endl;
        }
};

class newCL1 : public oldCl
{
     public:
            void display_newCL1()
            {
                cout<<"display_newCL1"<<endl;
                display_oldCl();
            }
};


class newCL2 : public oldCl
{
     public:
            void display_newCL2()
            {
                cout<<"display_newCL2"<<endl;
                display_oldCl();
            }
};


////Multilevel Inheritance
class grandParent
{
     public:
        void display_grandParent()
        {
            cout<<"display_grandParent"<<endl;
        }
};

class parent1 : public grandParent
{
    public:
        void display_parent1()
        {
            cout<<"display_Parent1"<<endl;
            display_grandParent();
        }
};

class parent2 : public grandParent
{
    public:
        void display_parent2()
        {
            cout<<"display_Parent2"<<endl;
            display_grandParent();
        }
};
class child : public parent1,public parent2
{
    public:
        void display_child()
        {
            cout<<"display_child"<<endl;
            display_parent1();
            display_parent2();
        }
};

int main()
{

    return 0;
}
