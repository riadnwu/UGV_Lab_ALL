#include <iostream>
#include<stdlib.h>

using namespace std;
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main()
{
    int studentId1 = 1001;
    //int 1studentId = 1001;
    //float student ID=1001;
    double student_id=1001;
    //long student-id=1001;

     int a=10;
     int *b=&a;
     *b=20;
    {
        int a= 25;
      cout<<a<<endl;
      }
     cout<<a<<endl <<b<<endl;

    Day today1 = TUESDAY;
    //Day today2 = SATURDAY;
    Day today3= (Day) 'SATURDAY';

    int* dynamicArray = (int*)malloc(5*4);
      for (int i = 0; i < 5; i++) {
            cout<<"i:"<<i<<endl;
            if (i%2==0){
            dynamicArray[i] = i+1;

            cout<<i+1<<": Odd: "<<dynamicArray[i] <<endl;}
            else{
            dynamicArray[i] = i-1;
            cout<<i+1<<": Even: "<<dynamicArray[i] <<endl;
            }
        }


    return 0;
}
