/*
Md. Riadul Islam
*/
#include <iostream>
#include <map>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<conio.h>

/*
2011
123
teacher
Riadul
2015
123
student
Antu
2016
123
student
Pratik
2017
123
student
Pratik
*/

using namespace std;



class SMS
{
    private:
        //map <string,string> stId,stPass,stName,stEmail;
        //stId,stPass,stType,stName
        string printText[4]={"ID","Password","Type","Name"};
        map <string,string> stData[4];



    public:
        SMS();
        string st_login();
        void st_add();
        void st_search();
        void st_show_all();
        void st_edit();
        void st_delete();
        void set_data_to_file();
        void get_data_from_file();

};

SMS::SMS()
{
    get_data_from_file();
}
string SMS::st_login()
{

    string temp[4]={"","","",""};
    system("cls");
    cout<<"*** LogIn ***"<<endl;

     for(int i=0;i<3;i++)
     {
        up:;
        cout<<"Enter Your "<<printText[i]<<": "<<endl;
        cin>>temp[i];
        if(stData[0].find(temp[0])== stData[0].end() || temp[i].compare(stData[i][temp[0]])!=0)
        {
            cout<<printText[i]<<" Not Match Try Again!!!"<<endl;
            goto up;
        }
     }

     return stData[2][temp[0]];

}

void SMS::st_add()
{

    string temp[4]={"","","",""};
    system("cls");
    cout<<"*** Add New Data ***"<<endl;
    cout<<printText[0]<<": "<<endl;
    getline(cin,temp[0]);

    if(stData[0].find(temp[0])== stData[0].end())
    {
        stData[0].insert({temp[0],temp[0]});
        for(int i=1;i<4;i++)
        {
            cout<<printText[i]<<": "<<endl;
            getline(cin,temp[i]);
            stData[i].insert({temp[0],temp[i]});
        }
    }
    else
    {
        cout<<"Id Error!!!"<<endl;
    }
    set_data_to_file();
}



void SMS::st_edit()
{
    string temp[4]={"","","",""};
     system("cls");
    cout<<"*** Edit Data ***"<<endl;
    cout<<"Enter Your "<<printText[0]<<": "<<endl;
    cin>>temp[0];

    if(stData[0].find(temp[0])!= stData[0].end())
    {
        for(int i=1;i<4;i++)
        {
            cout<<"Edit Your"<<printText[i]<<": "<<endl;
            cin>>temp[i];
            stData[i][temp[0]]=temp[i];
        }
        cout<<"*** Edit Successfully ***"<<endl;
    }
    else
    {
        cout<<"Id Not Found!!!"<<endl;
    }
    set_data_to_file();
}

void SMS::st_delete()
{
    string temp;
    system("cls");
    cout<<"*** Delete Data ***"<<endl;
    cout<<"Enter Your "<<printText[0]<<" to Delete: "<<endl;
    cin>>temp;

    if(stData[0].find(temp)!= stData[0].end())
    {
        for(int i=0;i<4;i++)
        {
            cout<<"Delete Your"<<printText[i]<<": "<<stData[i][temp]<<endl;
            stData[i].erase(temp);

        }
        cout<<"*** Delete Successfully ***"<<endl;
    }
    else
    {
        cout<<"Id Not Found!!!"<<endl;
    }
    set_data_to_file();
}

void SMS::st_search()
{
    string temp;
    system("cls");
    cout<<"*** Search Data ***"<<endl;
    cout<<"Enter Your "<<printText[0]<<" to Search: "<<endl;
    cin>>temp;

    if(stData[0].find(temp)!= stData[0].end())
    {
        for(int i=0;i<4;i++)
        {
            cout<<"Your"<<printText[i]<<": "<<stData[i][temp]<<endl;

        }
    }
    else
    {
        cout<<"Id Not Found!!!"<<endl;
    }

}



void SMS::st_show_all() {
    for (int i = 0; i < 4; ++i) {
        cout << "Map " << i << ":" << endl;
        for (const auto& pair : stData[i]) {
            cout << pair.first << ": " << pair.second << endl;
        }
        cout << endl;
    }
}


void SMS::set_data_to_file()
{
    ofstream outputFile;
    outputFile.open("input.txt");

    for(auto i:stData[0])
    {
        for(int j=0;j<4;j++)
        {
            cout<<stData[j][i.first]<<" ";
            outputFile<<stData[j][i.first]<<endl;
        }
        cout<<endl;
    }
    outputFile.close();
}

void SMS::get_data_from_file()
{
    ifstream inputFile;
    string temp[4]={"","","",""};
    inputFile.open("input.txt");
    while(!inputFile.eof())
    {
        for (int i=0;i<4;i++)
        {
            getline(inputFile,temp[i]);
            if (temp[0]=="")
            {
                break;
            }
            stData[i].insert({temp[0],temp[i]});
            //cout<<temp[i]<<endl;
        }

    }
    inputFile.close();
}
int main()
{
    string type;
    SMS oj;
    type=oj.st_login();

    while(1)
    {
        int num;
        system("cls");
        cout<<"*** "<<type <<" Login Successfully  ***"<<endl;
        if(type.compare("teacher")==0)
        {
            cout<<"Enter 1 for Add"<<endl;
            cout<<"Enter 2 for Show All"<<endl;
            cout<<"Enter 3 for Search"<<endl;
            cout<<"Enter 4 for Edit"<<endl;
            cout<<"Enter 5 for Delete"<<endl;
            cout<<"Enter 6 for Exit"<<endl;

            cin>>num;

            switch (num)
            {
                case 1:
                    oj.st_add();

                    break;
                case 2:
                    oj.st_show_all();
                    break;
                case 3:
                    oj.st_search();
                    break;
                case 4:
                    oj.st_edit();
                    break;
                case 5:
                    oj.st_delete();
                    break;
                case 6:
                    exit(0);
                    break;

            }
        }

        else if(type.compare("student")==0)
        {
            cout<<"Enter 1 for Search"<<endl;
            cout<<"Enter 2 for Edit"<<endl;
            cout<<"Enter 3 for Delete"<<endl;
            cout<<"Enter 4 for Exit"<<endl;

            cin>>num;
            system("cls");

            switch (num)
            {
                case 1:
                    oj.st_search();
                    break;
                case 2:
                    oj.st_edit();
                    break;
                case 3:
                    oj.st_delete();
                    break;
                case 4:
                    exit(0);
                    break;

            }
        }
        getch();


    }

    return 0;
}
