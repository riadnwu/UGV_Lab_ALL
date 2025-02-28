#include <iostream>

using namespace std;

class cal
{
    private:
        static int a;
    public:
       friend void allCal(void);
};
int cal::a;

void allCal()
    {
        int temp;
        cout<<"Function add"<<&temp<<endl;
    }


int main()
{
    cal st1[30],st2,st3;
    allCal();
    return 0;
}
