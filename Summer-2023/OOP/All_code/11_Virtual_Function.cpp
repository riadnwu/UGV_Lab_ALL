#include <iostream>

using namespace std;


class old1
{
    public:
        virtual void display()
        {
            cout<<"display_old1"<<endl;
        }
};

class new11 : public old1
{
    public:
        void display()
        {
            cout<<"display_new"<<endl;
        }
};

int main()
{
    old1 *oj=new old1();
    oj->display();

    old1 *oj1=new new11();
    oj1->display();
    return 0;
}
