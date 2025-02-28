#include <iostream>

using namespace std;

class sum
{
    public:
        void display()
        {
            cout<<"In Heap"<<endl;
        }
};

int main()
{
    sum *oj=new sum();
    oj->display();
    return 0;
}
