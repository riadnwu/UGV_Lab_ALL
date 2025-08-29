#include <iostream>

using namespace std;

class get_set
{
    private:
        int a;
    public:
        void set_a(int a)
        {
            this->a=a;
            cout<<&a<<endl;
        }

        int get_a()
        {
            cout<<&a<<endl;
            return a;
        }

};
int main()
{
    get_set oj,oj1,oj2,oj3;
    oj.set_a(10);
    cout<<oj.get_a()<<endl;

    return 0;
}
