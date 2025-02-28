#include <iostream>
#include<sstream>

using namespace std;

int main()
{
   string s="10",s1;
   int x,y=11;
   stringstream ss;
   ss<<s;
   ss>>x;

   ss.clear();

   ss<<y;
   ss>>s1;
   cout<<x<<endl<<s1;

}
