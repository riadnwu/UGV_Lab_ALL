#include <iostream>

using namespace std;

class old
{
    private:
        display_private()
        {
            cout<<"From Private"<<endl;
        }
    protected:
        display_protected()
        {
            cout<<"From protected"<<endl;
        }
    public:
        display_public()
        {
            cout<<"From public"<<endl;
        }

};

class new1 : private old
{
    public:
        new1()
        {
            display_protected();
            display_public();
        }

};
class new2 : protected old
{
        public:
        new2()
        {
            display_protected();
            display_public();
        }

};
class new3 : public old
{
    public:
        new3()
        {
            display_protected();
            display_public();
        }
};

int main()
{
    new3 oj;
    oj.display_public();
    return 0;
}
