#include<iostream>
#include<fstream>
#include<windows.h>
#include<map>
using namespace std;
class SMS
{
    private:
    map <string,string> st_id;
    map <string,string> st_name;
    map <string,string> st_pass;
    map <string,string> st_email;

    public:
    void showData();
    void login(int st_id,string st_pass);
    void add_st();
    void search_st(int st_id);
    void add_to_map();
};
void SMS::add_to_map()
{
    st_name.insert({"12321009","Emon Howlader"});
    //                 key        value
    cout<<st_name["12321009"]<<endl;
    st_name["12321009"]="Md Nur";
    //                 key        value
    cout<<st_name["12321009"]<<endl;
    st_name.erase("12321009");
    //                 key        value
    cout<<st_name["12321009"]<<endl;


}

void SMS::showData()
{
    ifstream file;
    file.open("data.txt");
    string st_name,st_id,st_pass,st_email;

    while(getline(file,st_name))
    {
        cout<<st_name<<endl;
        getline(file,st_id);
        cout<<st_id<<endl;
        getline(file,st_pass);
        cout<<st_pass<<endl;
        getline(file,st_email);
        cout<<st_email<<endl;
        cout<<"________________"<<endl;
        //system("CLS");
    }
}

void SMS::add_st()
{
    string st_name,st_id,st_pass,st_email;
    cout<<"Enter Name of the student: ";
    cin>>st_name;
    cout<<"Enter Id of the student: ";
    cin>>st_id;
    cout<<"Enter Password of the student: ";
    cin>>st_pass;
    cout<<"Enter Email of the student: ";
    cin>>st_email;
    ofstream file;
    file.open("data.txt",ios::app);
    file<<st_name<<"\n"<<st_id<<"\n"<<st_pass<<"\n"<<st_email<<"\n";
    file.close();
}

int main()
{
    SMS oj;
    //oj.add_st();
    //oj.showData();
    oj.add_to_map();

    return 0;
}
