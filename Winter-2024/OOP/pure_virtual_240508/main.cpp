#include <iostream>

using namespace std;

class old_class
{
    public:
        virtual void show()=0;

};

class new_class : public old_class
{
    public:
        void show()
        {
            cout<<"From New Class"<<endl;
        }
};

int main()
{
    new_class oj;
    oj.show();
    return 0;
}
