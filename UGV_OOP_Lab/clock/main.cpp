#include <iostream>
#include<fstream>

using namespace std;



int main()
{
    char c='a';
    string s="Hello World";


    cout<<&s<<endl;

    cout << "address of char   :" << static_cast<void *>(&c) << endl;

    return 0;
}
