#include <iostream>
#include<map>


using namespace std;

class sms
{
    map <string,string> bdNamee,bdId,bdPass;
};


int main()
{
    map <string,string> sNam1,sPass;


    sNam1.insert({"12211008","Anttu"});
    sPass.insert({"12211008","12345"});

    string key;
    cin>>key;
    if(sNam1.find(key)==sNam1.end())
    {
        cout<<"Not Found!!"<<endl;
    }
    else
    {
        cout<<"Name: "<<sNam1[key]<<" Pas:"<<sPass[key]<<endl;

    }


    return 0;
}
