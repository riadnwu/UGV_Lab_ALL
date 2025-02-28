#include <iostream>

using namespace std;

class cal
{
    private:
         int a;
         static int b;
    public:

        void setValue()
        {
           int temp;
           cout<<"Add of Function:"<<&temp<<endl;
           cout<<"Add of Variabl:"<<&a<<endl;
           cout<<"Add of Satic Variabl:"<<&b<<endl;
        }
};

int cal::b;

int main()
{
    cal oj1,oj2;
    oj1.setValue();
    oj2.setValue();
}
