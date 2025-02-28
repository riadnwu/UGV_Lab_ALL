#include <iostream>

using namespace std;

class st
{
    public:
        void disp()
        {
            cout<<"from st Class"<<endl;
        }
};


int main()
{
    st *pt;
    st oj;
    pt=&oj;
    pt->disp();

    return 0;
}
