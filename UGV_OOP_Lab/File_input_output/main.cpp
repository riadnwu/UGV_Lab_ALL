#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string data;
    ifstream inputFile;
    inputFile.open("input.txt");
    while(getline(inputFile,data))
    {
        cout<<data<<endl;
    }
    return 0;
}
