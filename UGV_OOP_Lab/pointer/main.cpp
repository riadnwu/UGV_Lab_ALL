#include <iostream>

using namespace std;

class sum{
private:
int a;
int b;
int c;
public:
int add(int a,int b);
void show();

};

class cal:public sum{

};

int sum::add(int a,int b)
{
    this->a=a;
    this->b=b;
    c=this->a+this->b;
    return(c);
}

void sum::show()
{
  cout<<"Sum: "<<c;
}

int main()
{
    int x[5]={1,2,3,5,4};
    int *p=x;
    cal addOj;

    for(int i=0;i<5;i++)
    {
      cout<<p<<endl<<*p<<endl;
      p++;
    }

    addOj.add(45,55);
    addOj.show();



    return 0;
}
