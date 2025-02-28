#include <iostream>

using namespace std;


int main()
{
 int a=15,b=10;
 int &r=a;
 int *p1=&a;
 int *p2=&b;
 int temp;

 r=20;

 temp=*p1;
 *p1=*p2;
 *p2=temp;

 cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
}
