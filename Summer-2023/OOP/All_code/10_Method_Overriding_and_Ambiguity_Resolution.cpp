#include <iostream>

using namespace std;


// a.	Method Overriding

class oldCl
{
    public:
        void display()
        {
            cout<<"display_old"<<endl;
        }
};

class newCL : public oldCl
{
     public:
            void display()
            {
                cout<<"display_newCL"<<endl;

            }
};
///	b.	Ambiguity Resolution


class old1
{
    public:
        void display()
        {
            cout<<"display_old1"<<endl;
        }
};

class old2
{
    public:
        void display()
        {
            cout<<"display_old2"<<endl;
        }
};

class new11 : public old1, public old2
{

};



int main()
{
    new11 oj;
    oj.old1::display();
    oj.old2::display();


    newCL oj1;
    oj1.display();

    return 0;
}
