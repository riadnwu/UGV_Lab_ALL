#include <iostream>

using namespace std;

int main()
{
    const int n=6;
    //            ABCDEF
    int g[n][n]={{0,3,5,2,4,0},
                {0,0,0,7,4,0},
                {0,0,0,6,0,0},
                {0,0,0,0,3,2},
                {0,0,0,0,0,2},
                {0,0,0,0,0,0}};
   int s=0;
   int value=0;
   cout<<s<<endl;
   while(s!=n-1)
   {
       int min1=10000,index=0;
       for(int i=0;i<n;i++)
       {
            if(g[s][i]<min1&& g[s][i]!=0)
            {
                min1=g[s][i];
                index=i;
            }
       }
       value=value+min1;
       cout<<index<<endl;
       s=index;
   }
   cout<<"Tota Cost:"<<value;

    return 0;
}
