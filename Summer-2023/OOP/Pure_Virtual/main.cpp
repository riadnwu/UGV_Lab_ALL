#include <iostream>

using namespace std;

class old{

    public:
        void display()
        {
            cout<<"From OLd1 class"<<endl;
        }


};
class old1{


    public:
        void display()
        {
            cout<<"From OLd2 class"<<endl;
        }



};


class new1 : public old,public old1
{
    public:
        void display()
        {
            cout<<"From New class"<<endl;
        }
};





int main()
{
    new1 *pt;
    new1 oj;
    pt=&oj;

    pt->display();


    return 0;
}
