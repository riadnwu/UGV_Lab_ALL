#include <iostream>

using namespace std;

void MAIN()
{
    cout<<"test"<<endl;
}
int main()
{
     MAIN();
     main();
    int a,b;
    cin>>a>>b;
    try
    {
        if(b==0)
           {
            throw "Error";
           }
       cout<<a/b<<endl;



    }
    catch(const char *c)
    {
        cout<<c<<endl;
    }

    cout<<"Successful"<<endl;
    return 0;
}
