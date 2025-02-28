#include <iostream>

using namespace std;

class old{
    public:
        void display()
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
    new1 oj;

    oj.display();
    return 0;
}
