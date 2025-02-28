#include <iostream>
#include<string>
#include<fstream>
#include<windows.h>
using namespace std;
void setxy(int x ,int y)
{
    COORD a;
    a.X=x;
    a.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
int main()
{
    string id="";
    string pass="";
    string tempId,tempPass;
    ifstream inputFile("output.txt");
    getline(inputFile,id);
    getline(inputFile,pass);
    setxy(50,5);
    cout<<"Login";
    setxy(50,6);
    cout<<"Enter User Id: ";
    getline(cin,tempId);
    setxy(50,7);
    cout<<"Enter Password: ";
    getline(cin,tempPass);
    if(id.compare(tempId)==0 && pass.compare(tempPass)==0)
    {
        system("cls");
        setxy(50,5);
        cout<<"Login Successfully";


    }
    else
    {
        cout<<"User Id or Password is not correct!!";
    }
    return 0;
}
