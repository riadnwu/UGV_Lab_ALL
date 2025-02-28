#include <iostream>

using namespace std;

class sum
{
    private:
        int a,b;

    public:
        sum(int a=10,int b=20)
        {
            a=10;
            b=20;
            cout<<"From Constct"<<endl;
        }
        sum(int a=10)
        {
            a=10;
            b=20;
            cout<<"From Constct"<<endl;
        }
        void show_data()
        {
            cout<<a+b<<endl;
        }
};


int main()
{
    sum oj,oj2,oj3;
    oj.show_data();
    return 0;
}
