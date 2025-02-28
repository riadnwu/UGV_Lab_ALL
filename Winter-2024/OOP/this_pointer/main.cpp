#include <iostream>

using namespace std;

class sum
{
    private:
        int a;
    public:
        sum()
        {
            a=30;
        }
        void show(int a1)
        {
            cout<<a<<endl;
            cout<<a1<<endl;

        }
};

int main()
{
    sum oj;
    oj.show(10);
    return 0;
}
