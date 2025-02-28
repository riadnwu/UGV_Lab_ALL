#include <iostream>
using namespace std;

class old
{
    public:
        virtual void dis()=0;
};

class new1:public old
{
    public:
        void dis()  override
        {
            cout<<"From Child!!"<<endl;
        }
};

int main()
{
    old *oj=new new1();
    oj->dis();
    return 0;
}
