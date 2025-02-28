#include <iostream>
#include<fstream>

using namespace std;



int main()
{
    fstream file;
    file.open("input.txt",(ios::out));
    file<<"Hello"<<endl<<"Helllll";
    file.close();
    file.open("input.txt",(ios::in));
    string s;
    while(getline(file,s))
    {
       cout<<s<<endl;
    }

    file.close();
    return 0;
}
