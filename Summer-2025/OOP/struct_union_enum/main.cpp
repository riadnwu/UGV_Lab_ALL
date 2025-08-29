#include <iostream>

using namespace std;
enum st_level
{
    level_1=3,
    level_2=6,
    level_3=10
};


union st_data
{
    int st_id;
    int st_name;
};

struct st_info
{
    st_data oj3;

    void show_st_info(st_data oj1)
    {
        cout<<oj1.st_id<<" "<<oj1.st_name<<endl;
    }
};


int main()
{
    int a;
    a=10;
    int p;
    p=a;

    cout<<a<<endl;
    cout<<&a<<endl;
    p=20;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<a<<endl;
    st_data oj2;
    st_info oj;

    oj2.st_id=10;
    oj2.st_name=20;

    oj.show_st_info(oj2);

    st_level c;
    c=level_1;


    cout<<c<<endl;



    return 0;
}
