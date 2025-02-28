#include <iostream>

using namespace std;

class sum
{
    private:
        int a,b;
    public:
        sum()
        {
            a=10;
            b=20;
            cout<<a<<" "<<b<<endl;
        }

        ~sum()
        {
            a=NULL;
            b=NULL;
            cout<<"From Destruct"<<endl;
        }

        void show()
        {
            cout<<"HEllo class!!"<<endl;
        }

};


int main()
{
    sum oj;
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();

    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    oj.show();
    return 0;
}
