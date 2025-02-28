#include <iostream>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
   long long int n;
   ofstream input("input.txt");
   ofstream output("output.txt");


   int q=18;//3 to20
   float d=1;
   long long int j_q;
   for(n =1000000000000000000000000;n<1000000000000000000001000;n=n+100)
   {

       for(q=2;q<=20;q++)
       {
           input<<n<<" "<<q<<endl;
           d=1;
            while(d<=(q-1)*n)
           {
               d=ceil(q*d/(q-1));

           }
            j_q = q*n+1-d;
            output<<j_q<<endl;
       }


   }

   input.close();
   output.close();

    return 0;
}
