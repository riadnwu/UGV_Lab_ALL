#include <iostream>

using namespace std;

class sum
{
    private:
        int a;
    public:
        sum()
        {
            a=10;
        }
        ~sum()
        {
            a=NULL;
        }
};

int main()
{
    sum oj;
    return 0;
}


