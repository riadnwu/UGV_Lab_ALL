#include <iostream>

using namespace std;

class encap
{
    private:
        int a;
    public:
        void set_a(int a)
        {
            cout<<&a<<endl;
            a=a;
        }
        int get_a()
        {
        cout<<&a<<endl;
          return a;
        }
};

int main()
{
    encap oj;
    oj.set_a(10);
    cout<<oj.get_a()<<endl;

    return 0;
}
