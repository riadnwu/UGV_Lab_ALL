#include <iostream>

using namespace std;

class old{
    public:
        virtual void display()
        {
            cout<<"Old Class.."<<endl;
        }
};



class new1: public old
{
    public:
        void display()
        {
            cout<<"New Class.."<<endl;
        }
};


int main()
{
    old *oj=new new1();
    oj->display();

    return 0;
}
