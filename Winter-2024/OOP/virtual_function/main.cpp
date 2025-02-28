#include <iostream>

using namespace std;

class parent
{
    public:
        virtual void show()
        {
            cout<<"From Parent Class"<<endl;
        }
};

class child : public parent
{

};


int main()
{
    parent *oj=new child();
    oj->show();
    return 0;
}
