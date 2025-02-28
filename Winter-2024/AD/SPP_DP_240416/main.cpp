#include <iostream>

using namespace std;



void loop(int i)
{
    if(i<10)
    {

      i++;
      loop(i);
      cout<<i<<endl;
    }

}
int main()
{
    loop(0);
    return 0;
}
