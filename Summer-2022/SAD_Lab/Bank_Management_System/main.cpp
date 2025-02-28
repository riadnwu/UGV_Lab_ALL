#include <iostream>
#include<map>
#include<fstream>

/*
2015
123
Jamal Khan
afdc@hdg
2016
123
Jamal Khan
afdc@hdg
2017
123
Jamal Khan
afdc@hdg
2018
123
Jamal Khan
afdc@hdg
*/


using namespace std;
class BMS
{
    private:
        map<string,string> userInfo[4];// 0=id,1=pass,2=name,3=email

    public:
        BMS();
        void user_get_data();
        void user_set_data();
        void user_login();
        void user_add(string info[]);
        void user_search(string id);
        void user_edit(string id);
        void user_delete(string id);
        void user_show_all();
};

BMS::BMS()
{
   user_get_data();
}
void BMS:: user_get_data()
{
    ifstream data;
    data.open("data.txt");
    while(!data.eof())
    {
        string info[4]={"","","",""};
        getline(data,info[0]);
        getline(data,info[1]);
        getline(data,info[2]);
        getline(data,info[3]);
        user_add(info);
    }
    data.close();
}

void BMS::user_show_all()
{
   for(auto i: userInfo[0])
    {
        cout<<userInfo[0][i.first]<<endl;
        cout<<userInfo[1][i.first]<<endl;
        cout<<userInfo[2][i.first]<<endl;
        cout<<userInfo[3][i.first]<<endl;
        cout<<"-------------------------"<<endl;
    }

}

void BMS::user_set_data()
{
    ofstream data;
    data.open("data.txt");

    string info[4]={"","","",""};
    for(auto i: userInfo[0])
    {
        data<<userInfo[0][i.first]<<endl;
        data<<userInfo[1][i.first]<<endl;
        data<<userInfo[2][i.first]<<endl;
        data<<userInfo[3][i.first]<<endl;
    }
    data.close();
}

void BMS:: user_add(string info[])
{

    if(userInfo[0].find(info[0])== userInfo[0].end())
    {
        for (int i=0;i<4;i++)
        {
           userInfo[i].insert({info[0],info[i]});
        }

        user_set_data();
    }
    else
    {
        cout<<"This Id Already added!!!\n";
    }

}

void BMS:: user_search(string id)
{
    if(userInfo[0].find(id)== userInfo[0].end())
    {
        cout<<"Value Not found!!"<<endl;
    }
    else
    {
        cout<<"Search Successfully..."<<endl;
        for (int i=0;i<4;i++)
        {
           cout<<userInfo[i][id]<<endl;
        }

    }
}

void BMS:: user_edit(string id)
{
    string info[4]={"","","",""};
    cout<<"Name:";
    cin>>info[1];
    cout<<"Password:";
    cin>>info[2];
    cout<<"Email:";
    cin>>info[3];

    if(userInfo[0].find(id)== userInfo[0].end())
    {
        cout<<"Value Not found for edit!!"<<endl;
    }
    else
    {
       for (int i=1;i<4;i++)
        {
           userInfo[i][id]=info[i];
        }
        cout<<"Edit Successfully..."<<endl;
        user_set_data();
    }

}

void BMS:: user_delete(string id)
{

    if(userInfo[0].find(id)== userInfo[0].end())
    {
        cout<<"Value Not found for delete!!"<<endl;
    }
    else
    {
       for (int i=0;i<4;i++)
        {
           userInfo[i].erase(id);
        }
        cout<<"Delete Successfully..."<<endl;
        user_set_data();
    }

}

int main()
{
    BMS oj;
    int n;
    string tempId;
    while(true)
    {
        cout<<"Bank management System\n";
        cout<<"Press 1 for Add\n";
        cout<<"Press 2 for Search\n";
        cout<<"Press 3 for Edit\n";
        cout<<"Press 4 for Delete\n";
        cout<<"Press 5 for Show All\n";
        cout<<"Press 6 for Exit\n";
        cin>>n;

        if(n==1)
        {
            string info[4]={"","","",""};
            cout<<"Id:";
            cin>>info[0];
            cout<<"Name:";
            cin>>info[1];
            cout<<"Password:";
            cin>>info[2];
            cout<<"Email:";
            cin>>info[3];
            oj.user_add(info);
            cout<<"Add Successfully..."<<endl;
        }
        else if(n==2)
        {
            cout<<"Enter User ID:";
            cin>>tempId;
            oj.user_search(tempId);
        }
        else if(n==3)
        {
            cout<<"Enter User ID:";
            cin>>tempId;
            oj.user_edit(tempId);
        }
        else if(n==4)
        {
            cout<<"Enter User ID:";
            cin>>tempId;
            oj.user_delete(tempId);
        }
        else if(n==5)
        {
           oj.user_show_all();
        }
        else if(n==6)
        {
           break;
        }
    }
    return 0;
}
