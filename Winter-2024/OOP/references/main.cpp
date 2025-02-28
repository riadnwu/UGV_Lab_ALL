#include <iostream>

using namespace std;

void sum(int a=10,int b=10)
{
  cout<<a+b<<endl;
}
void sum(int a)
{
  cout<<a<<endl;
}
void sum()
{
  cout<<"Empty"<<endl;
}


int main()
{
    sum();
    sum(15);
    sum(15,15);
    return 0;
}
