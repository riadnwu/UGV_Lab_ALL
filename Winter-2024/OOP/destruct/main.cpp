#include <iostream>

using namespace std;

class sum
{
    private:
        int a,b;
    public:
        sum()
        {
            cout<<"From Cons"<<endl;
            a=10;
            b=20;
        }
        void showData()
        {
            cout<<a+b<<endl;
        }

        ~sum()
        {
            cout<<"From Des"<<endl;
            a=0;
            b=0;
        }
};

int main()
{
    sum oj;
    oj.showData();
    oj.showData();
    cout<<"From Main"<<endl;
    oj.showData();
    return 0;
}
