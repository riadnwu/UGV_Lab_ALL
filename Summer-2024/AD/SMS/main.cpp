#include <iostream>

using namespace std;


class SMS
{

    private:
    int st_id,st_pass,st_email,
    public:
        void login(int st_id,string st_pass);
        void add_st();
        void search_st(int st_id);
        void att_st();

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
