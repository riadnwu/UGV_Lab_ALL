#include <iostream>

using namespace std;

class old1
{
    public:
        void show()
        {
            cout<<"From Old-1 Class"<<endl;
        }
};

class old2
{
    public:
        void show()
        {
            cout<<"From Old-2 Class"<<endl;
        }
};
class new1: public old1, public old2
{

};


int main()
{
    new1 oj;
    oj.old1::show();
    oj.old2::show();
    return 0;
}
