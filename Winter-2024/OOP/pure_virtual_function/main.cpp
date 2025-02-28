#include <iostream>

using namespace std;


class parent
{
    public:
        virtual void show()=0;
};

class child : public parent
{
   public:
       void show()
       {
           cout<<"From Chile Class"<<endl;
       }
};


int main()
{
    parent oj;
    //oj->show();
    return 0;
}


