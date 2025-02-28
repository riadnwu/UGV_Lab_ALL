#include <iostream>


using namespace std;



int  main()
{
    int coin[3]={10,5};
    int tv=18;
    int i=0;
    while(tv>0 && i<2)
    {

        if(tv>=coin[i])
        {
           tv=tv-coin[i];
           cout<<coin[i]<<" ";
        }
        else
        {
            i++;
        }
    }
    cout<<tv<<endl;

    return 0;
}
