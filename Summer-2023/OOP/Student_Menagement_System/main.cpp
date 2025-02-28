#include <iostream>
#include<fstream>
#include<map>


using namespace std;

class student
{
    private:
        //ifstream inputData;
        //ofstream outputData;
        map<string,string> id,name,pass;

    public:
        void addData(string stId,string stName,string stPass)
        {
            id.insert({stId,stId});
            name.insert({stId,stName});
            pass.insert({stId,stPass});

        }

        void getAlldata()
        {

            for(auto i :id)
            {
                string tempId;
                string tempName;
                string tempPass;

                tempId=id[i.first];
                tempName=name[i.first];
                tempPass=pass[i.first];
                set_data_to_file(tempId,tempName,tempPass);

            }
        }

        void set_data_to_file(string  id,string name,string pass)
        {
            ofstream outputData("data.txt");
            outputData<<id<<endl;
            outputData<<name<<endl;
            outputData<<pass<<endl;
            outputData.close();
        }
        string get_data_from_file()
        {
            string stName;
            ifstream inputData("data.txt");
            while(inputData)
            {
                //inputData>>stName;
                getline(inputData,stName);
                cout<<stName<<endl;
            }


            inputData.close();
            return stName;
        }
};

int main ()
{
    student oj;
    //string stName;
    //cin>>stName;
    //getline(cin,stName);
    oj.addData("12221042","Krity","12221042");
    oj.addData("12221043","Jui","12221043");
    oj.addData("12221044","Eacin","12221044");
    oj.getAlldata();

    //oj.set_data_to_file(stName);
    //stName=oj.get_data_to_file();
    //cout<<"Student Name:"<<stName <<endl;

    return 0;
}





