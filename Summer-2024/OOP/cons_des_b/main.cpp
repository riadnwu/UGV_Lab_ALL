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
               cout<<"From Cons1: "<<a<<endl;
           }
           st(st &oj)
           {

               cout<<"From Cons2:"<<oj.a<<endl;
           }
           ~st()
           {
               a=NULL;
               cout<<"From DES: "<<a<<endl;
           }
           void dis()
           {
               cout<<"from st class"<<endl;
           }
};

int main()
{
    st oj,o2,o3,o4;
    oj.dis();
    oj.dis();
    oj.dis();
    oj.dis();
    oj.dis();
    //st oj2(oj);
    st oj1(oj);
    return 0;
}
