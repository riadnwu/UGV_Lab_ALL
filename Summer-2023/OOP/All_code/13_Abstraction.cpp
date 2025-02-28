#include <iostream>
using namespace std;

class dataAbstraction {
public:
    int a, b;

public:
    void data()
    {
        cout << "Welcome to TechVidvan! \n";
        cout << "Enter Two values : ";
        cin >> a >> b;
    }
public:
    void display()
    {
        cout << "The sum is "<< a+b;
        cout << "\n";
    }
};
int main()
{
    dataAbstraction dA;
    dA.data();
    dA.display();
}
