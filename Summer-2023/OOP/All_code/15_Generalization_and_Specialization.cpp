
#include <iostream>

using namespace std;
/// Base class (generalization)
class Shape
{
    public:
        virtual double area()= 0;

};

/// (specialization)
class Circle : public Shape
{
    private:
        double radius;

    public:

        double area()
        {
            return 3.14 * radius * radius;
        }
};

class Square : public Shape
{
    private:
        double side;

    public:

        double area()
        {
            return side * side;
        }
};
int main()
{

    return 0;
}
