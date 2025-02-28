#include <iostream>

using namespace std;

class old1{
    public:
        void display()
        {
            cout<<"Old1 Class.."<<endl;
        }
};

class old2{
    public:
        void display()
        {
            cout<<"Old2 Class.."<<endl;
        }
};

class new1: public old1,public old2
{

};


int main()
{
    new1 oj;

    oj.old1::display();
    oj.old2::display();
    return 0;
}
