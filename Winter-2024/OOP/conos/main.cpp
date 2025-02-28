#include <iostream>

using namespace std;

class sum
{
    public:

        sum()
        {
            cout<<"1-cons"<<endl;
        }
        sum(int a,int b=20)
        {
            cout<<"2-cons"<<endl;
        }
        sum(int a, int b, int c)
        {
            cout<<"3-cons"<<endl;
        }
};

int main()
{
    sum oj;
    sum oj1(10,10);
    sum oj2(10,20,30);
    sum oj3(10);
    return 0;
}
