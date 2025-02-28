#include <iostream>

using namespace std;


class old1
{
    public:
        ///Pure Virtual Function
        virtual void display()=0;
};

class new11 : public old1
{
    public:
        ///Interfaces
        void display()
        {
            cout<<"display_new"<<endl;
        }
};

int main()
{
    old1 *oj1=new new11();
    oj1->display();

    return 0;
}
