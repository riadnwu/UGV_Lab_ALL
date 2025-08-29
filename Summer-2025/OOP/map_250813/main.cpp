#include <iostream>
#include<map>

using namespace std;

struct data_info
{
    int id;
    string name;
    string add;
    string user_id;
    string user_pass;
};
class sms
{

    map <string,data_info> tea_info;
    map <string,data_info> head_info;
};
class st_func
{
    private:
    map <string,data_info> st_info;
    public:
        void st_add_info(map <string,data_info> st_info);
        map <string,data_info> search_info();
        void st_edit(string user_id)
        void st_delete(string user_id)
};

void st_func::st_add_info(map <string,data_info> st_info)
{
    st_info["10006"]={"10006",name,email,phone, pass};
}



int main()
{
    return 0;
}
