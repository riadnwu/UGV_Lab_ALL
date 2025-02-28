#include <iostream>
using namespace std;
class encap{
private:
string pname;
public:
 void setName(string name)
 {
   pname=name;
 }
 string getName()
 {
     return pname;
 }
};
class message{
public:
    void messagePass(encap obj)
    {
        obj. setName("XYZ");
        cout<<"Pass Message: "<<obj.getName()<<endl;
    }
};
int main()
{
   encap obj;
   message mObj;
   obj. setName("Riadul");
   mObj.messagePass(obj);
    return 0;
}
