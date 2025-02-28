#include <iostream>

using namespace std;

class old_class
{
    public:
        virtual void show()

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
    old_class *oj=new old_class();
    oj->show();
    return 0;
}
