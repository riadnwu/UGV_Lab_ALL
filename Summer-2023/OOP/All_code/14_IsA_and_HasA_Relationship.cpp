#include <iostream>

using namespace std;

///IsA Relationship

class old
{
    public:
        void display_old()
        {
            cout<<"display_old"<<endl;
        }

};

class new1 : public old
{

     public:
            void display_new()
            {
                cout<<"display_new"<<endl;
                display_old();
            }
};



///	HasA Relationship

class old1
{
    public:
        void display_old1()
        {
            cout<<"display_old1"<<endl;
        }
};

class old2
{
    private:
        old1 oj;

    public:
        void display_old2()
        {
            cout<<"display_old2"<<endl;
            oj.display_old1();
        }
};

int main()
{
    old2 oj;
    oj.display_old2();
    return 0;
}
