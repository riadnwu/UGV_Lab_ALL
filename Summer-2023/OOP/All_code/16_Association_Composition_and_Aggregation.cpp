#include <iostream>

using namespace std;

///Association

class old1
{

};

class old2
{
    private:
        old1 oj;
        vector <*oj> data;

};


///Composition

class old1
{

};

class old2
{
    private:
        old1 oj;

};

///	Aggregation


class old1
{

};

class old2
{
    private:
        vector <*oj> data;

};

int main()
{
    old2 oj;
    oj.display_old2();
    return 0;
}
