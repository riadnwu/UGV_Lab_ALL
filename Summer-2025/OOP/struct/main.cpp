#include <iostream>
#include <fstream>


using namespace std;

struct sms
{
    string st_id;
    string st_name;
    string st_add;
    void st_add_info()
    {
        cout<<"Stdunt Id:";
        cin>>st_id;
        cout<<"Stdunt Name:";
        cin>>st_name;
        cout<<"Stdunt Address:";
        cin>>st_add;
        add_to_file();
    };

    void add_to_file()
    {
        ofstream data("data.txt",ios::app);
        data<<st_id<<endl<<st_name<<endl<<st_add<<endl;
        data.close();
    }
    void show_from_file()
    {
        ifstream data("data.txt");
        string temp;
        while(data!=NULL)
        {
            getline(data,temp);
            st_id=temp;
            getline(data,temp);
            st_name=temp;
            getline(data,temp);
            st_add=temp;
            cout<<st_id<<endl<<st_name<<endl<<st_add<<endl;
        }
        data.close();
    }
    void st_search(int st_id);



};


int main()
{
    sms a;
    a.show_from_file();
    a.st_add_info();
    return 0;
}
