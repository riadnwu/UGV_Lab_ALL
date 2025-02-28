#include <iostream>

using namespace std;

struct student
{
    int id;
    string name;
    string dep;
    int phone;

};

int main()
{
    student st1[30];
    st1.id=1000;
    cout<<st1.id<<endl;


    return 0;
}
