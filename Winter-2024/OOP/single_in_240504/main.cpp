#include <iostream>

using namespace std;

class grand_old
{
    public:
       void show_grand_old()
       {
           cout<<"From Grand OLd Class"<<endl;
       }
};

class old:  public grand_old
{
   public:
       void show_old()
       {
           cout<<"From OLd Class"<<endl;
       }
};

class old_2 : virtual public grand_old
{
   public:
       void show_old_2()
       {
           cout<<"From OLd-2 Class"<<endl;
       }
};
class new1: public old,public old_2
{
    public:
       void show_new1()
       {
           cout<<"From New Class"<<endl;
       }
};


int main()
{
    new1 oj;
    oj.show_new1();
    oj.show_old();
    oj.show_old_2();
    oj.show_grand_old();

    return 0;
}
