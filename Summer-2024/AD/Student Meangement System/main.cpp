#include <iostream>
#include<fstream>
#include<map>

using namespace std;
class SMS
{
    private:

    map <string,string>  st_id;
    map <string,string>  st_pass;
    map <string,string>  st_name;
    map <string,string>  st_email;

    //     key   value
    public:
    void login(int st_id,string st_pass);
    void add_st();
    void search_st(int st_id);
    void show_all();
    void add_data_map();
};

void SMS::add_data_map()
{
   st_id.insert({"1002","Lamia Akter"});
   cout<<st_id["1002"]<<endl;
   st_id.erase("1002");
   cout<<st_id["1002"]<<endl;
}

void SMS::show_all()
{
    ifstream file;
    file.open("data.txt");
    string st_name,st_pass,st_id,st_email;

    while(getline(file,st_name))
    {

        getline(file,st_id);
        getline(file,st_pass);
        getline(file,st_email);

        cout<<st_name<<endl;
        cout<<st_id<<endl;
        cout<<st_pass<<endl;
        cout<<st_email<<endl;
        cout<<"--------------------------"<<endl;
    }

}

void SMS:: add_st()
{
    string st_name,st_pass,st_id,st_email;
    cout<<"Enter Student Name:";
    cin>>st_name;
    cout<<"Enter Student Id";
    cin>>st_id;
    cout<<"Enter Student Password:";
    cin>>st_pass;
    cout<<"Enter Student Email:";
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
    //oj.show_all();
    oj.add_data_map();
    return 0;
}
