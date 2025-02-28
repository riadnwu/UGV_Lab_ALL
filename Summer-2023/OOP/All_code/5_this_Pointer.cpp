#include <iostream>

using namespace std;

class sum
{
    private:
        int a;
        int b;
    public:
        sum(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
};

int main()
{
    sum oj1(10,20);
    return 0;
}
