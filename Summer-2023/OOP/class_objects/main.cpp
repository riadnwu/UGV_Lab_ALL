#include <iostream>
#include<stdio.h>
using namespace std;

class student
{
    private:
     static int i;
    public:
        int a;

        void sum()
        {
            cout<<"Static var: "<<i<<endl;
            cout<<"Static Add: "<<&i<<endl;
            i=i+10;
        }
};

int student::i;

int main()
{
    student oj1[10];


    oj1[0].sum();
    oj1[0].sum();
    oj1[0].sum();



    return 0;
}
