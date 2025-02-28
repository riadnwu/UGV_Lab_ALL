#include <iostream>

using namespace std;

class sum
{
    private:
        int a;
        int b;
        float c;

    public:
        sum()
        {
            a=10;
            b=10;
        }
        sum(int x,int y)
        {
            a=x;
            b=y;
        }
        sum(int x,int y,float z)
        {
            a=x;
            b=y;
            c=z;
        }
};

int main()
{
    sum oj;
    sum oj1(10,20);
    sum oj2(10,20,30.12f);
    return 0;
}
