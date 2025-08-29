#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a<<"- "<<b<<"- "<<c<<endl;
    string a1;
    cin.ignore();
    getline(cin,a1);
    cout<<a1;
   return 0;
}


