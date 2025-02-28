#include <iostream>
using namespace std;

class old
{
    public:
        virtual void display()=0;
};



class new1 : public old
{
    public:

};

int main(void)
{

    old *oj=new new1();

    oj->display();
    return 0;
}
