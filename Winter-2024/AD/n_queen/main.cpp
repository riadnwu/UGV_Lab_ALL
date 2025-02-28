#include <iostream>
#include<set>
#define n 8
using namespace std;
int queenNumber=6;
int qeenList[n];


set <int> check_queen()
{
    set <int> tempset;
    int colum,leftDigon,rightDigon;
    for(int j=0;j<n;j++)
    {
      tempset.insert(j);
    }
    for(int i=0;i<queenNumber;i++)
    {
        colum=qeenList[i];
        leftDigon=qeenList[i]-queenNumber+i;
        rightDigon=qeenList[i]+queenNumber-i;

        tempset.erase(colum);
        tempset.erase(leftDigon);
        tempset.erase(rightDigon);
    }
    return tempset;
}

void n_queen()
{
    if(queenNumber<n)
    {
        set <int> tempset;
        tempset=check_queen();
        cout <<"Queen: " <<queenNumber<<endl;


        if(!tempset.empty())
        {
            cout<<"Set: ";
          for (set<int>::iterator it = tempset.begin(); it != tempset.end(); ++it)
            {
                /*for (set<int>::iterator it = tempset.begin(); it != tempset.end(); ++it)
                {
                    cout << *it << "--";
                }
                cout<<endl;
                cout <<"Queen: " <<queenNumber<<"--"<<*it << "--\n";*/
                qeenList[queenNumber]=*it;
                queenNumber++;
                n_queen();
                if(queenNumber==n)
                {
                   break;
                }
                queenNumber=queenNumber-1;
            }
            tempset.clear();
        }
        else
        {
            cout<<"No space Need Backtruck!!"<<endl;
            //queenNumber=queenNumber-1;
        }
    }

}

int main()
{

    n_queen();
    for(int i=0;i<n;i++)
    {
        cout<<qeenList[i]<<",";
    }

    return 0;
}
