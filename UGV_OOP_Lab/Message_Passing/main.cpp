#include <iostream>

using namespace std;


class child{
 private:
 string name;
 int age;
 public:
  void setName(string name)
  {
      this->name=name;
  }
  void setAge(int age)
  {
      this->age=age;
  }
 string getName()
  {
      return this->name;
  }
  int getAge()
  {
      return this->age;
  }
};

class parent: public child{

 public:
   void setNameAge(int age,string name)
  {
     setAge(age);
     setName(name);
  }

};

int main()
{
    parent parentObj;
    parentObj.setNameAge(10,"Riadul Islam");
    child childObj;

    cout<<parentObj.getName()<<endl<<parentObj.getAge();
    return 0;
}
