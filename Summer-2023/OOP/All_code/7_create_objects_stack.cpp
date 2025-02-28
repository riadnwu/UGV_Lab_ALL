#include <iostream>

using namespace std;

class sum
{
public:
    void display()
    {
        cout << "In Stack" << endl;
    }
};

int main()
{
    sum *pt;
    // Declare a pointer
    sum oj;
    // Create an object 'oj'
    pt = &oj;
    //stack object 'oj' to the pointer 'pt'
    pt->display();
    // Call the 'display()
    return 0;
}
