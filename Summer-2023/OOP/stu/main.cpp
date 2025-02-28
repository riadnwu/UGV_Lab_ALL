#include <iostream>
#include<fstream>
#include<map>

using namespace std;

class stu
{
    private:
     map<string,string> id,name,pass;

    public:
        void add_stu_data(string tempId,string tempName,string tempPass)
        {
            id.insert({tempId,tempId});
            name.insert({tempId,tempName});
            pass.insert({tempId,tempPass});
        }

        void save_all_data()
        {
            string tempId;
            string tempName;
            string tempPass;

            for(auto i : id)
            {
                tempId=id[i.first];
                tempName=name[i.first];
                tempPass=pass[i.first];
                cout<<tempId<<tempName<<tempPass<<endl;
                set_data_to_file(tempId,tempName,tempPass);
            }
        }

        void set_data_to_file(string tempId,string tempName,string tempPass)
        {
            ofstream outputData("data.txt");
            outputData<<tempId<<endl;
            outputData<<tempName<<endl;
            outputData<<tempPass<<endl;
            outputData.close();
        }

        void  get_data_from_file()
        {
            ifstream inputData("data.txt");
            string tempId;
            string tempName;
            string tempPass;
            while(inputData)
            {
                //getline(inputData,tempName);
                //inputData>>tempName;
                getline(inputData,tempId);
                getline(inputData,tempName);
                getline(inputData,tempPass);
                cout<<tempId<<endl;
                cout<<tempName<<endl;
                cout<<tempPass<<endl;

            }

            inputData.close();
        }
};


int main()
{
    //string tempName;

    //getline(cin,tempName);
    stu oj;
    oj.add_stu_data("12221088","Rabin Bhuia","12221088");
    oj.add_stu_data("12221089","Rabin Bhuia","12221089");
    oj.save_all_data();
    oj.get_data_from_file();
    return 0;
}
