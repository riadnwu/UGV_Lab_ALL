#include <iostream>

using namespace std;

class st
{
    private:
        int a;

    public:
    st()
    {
        a=10;
        cout<<"from_cos"<<endl;
    }
    st(st &oj)
    {
        a=oj.a;
        cout<<a<<endl;
    }
    void dis()
    {
        cout<<a<<endl;
    }
    ~st()
    {
        a=NULL;
        cout<<"From Des:"<<a<<endl;
    }


} ;

int main()
{
    st oj;
    oj.dis();
    st oj1(oj);
    oj.dis();
    oj.dis();
    oj.dis();
    oj.dis();

    return 0;
}
