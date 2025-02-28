#include <iostream>
#include <map>
#include<fstream>

using namespace std;

class SMS
{
    private:
        map <string,string> stId,stPass,stName,stEmail;
        map<string,string> stData[4];


    public:
        void st_login(string stId, string stPass);
        void st_add();
        void st_search();
        void st_show_all();
        void st_eidit();
        void st_delet();
        void set_data_to_file();

};

void SMS::st_add()
{
    string printData[4]={"ID","Pass","Type","Name"};
    string temp[4]={"","","",""};
    cout<<printData[0]<<": "<<endl;
    cin>>temp[0];
    if(stData[0].find(temp[0])== stData[0].end())
    {
        stData[0].insert({temp[0],temp[0]});
        for(int i=1;i<4;i++)
        {
            cout<<printData[i]<<": "<<endl;
            cin>>temp[i];
            stData[i].insert({temp[0],temp[i]});
        }
    }
    else
    {
        cout<<"Id Err !!!";
    }
}
void SMS::set_data_to_file()
{
    for(auto i:stData[0])
    {
        for(int j=0;j<4;j++)
        {
            cout<<stData[j][i.first]<<endl;
        }

    }
}


int main()
{
    ofstream outputFile;
    ifstream inputFile;

    outputFile.open("data.txt");
    outputFile<<"Hello World"<<endl;
    outputFile<<"Hello World"<<endl;
    outputFile.close();

    string data;
    inputFile.open("data.txt");
    while(!inputFile.eof())
    {
        getline(inputFile,data);
        cout<<data<<endl;
    }

    inputFile.close();

    SMS oj;
    oj.st_add();
    oj.set_data_to_file();

    return 0;
}
