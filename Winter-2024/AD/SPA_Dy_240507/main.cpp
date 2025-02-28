//Md. Riadul islam
//11/07/24
#include <iostream>
#define n 5
#include <stack>
using namespace std;
//               0 1 2 3 4
int data[n][n]={{0,2,5,2,0},
                {0,0,0,0,1},
                {0,0,0,0,2},
                {0,0,0,0,1},
                {0,0,0,0,0}};

stack<int> finalPath;
int minValue=100000;

void spa(int i_index,int f_index,int tempMin,stack <int> tempPath)
{
    if(i_index<f_index)
    {
        for(int i=0;i<n;i++)
        {
            if(data[i_index][i]!=0)
            {
                tempMin=tempMin+data[i_index][i];
                tempPath.push(i);
                spa(i,f_index,tempMin,tempPath);
                tempPath.pop();
                tempMin=tempMin-data[i_index][i];

            }
        }
    }
    else
    {
        cout<<tempMin<<endl;
        if(minValue>=tempMin)
        {
            minValue=tempMin;
            finalPath=tempPath;
        }
    }
}



int main()
{
    int i_index=0;
    int f_index=n-1;
    int tempMin=0;
    stack <int> tempPath;
    spa(i_index,f_index,tempMin,tempPath);
    //cout<<minValue<<endl;

    while(!finalPath.empty())
    {
        cout<<finalPath.top()<<"<-";
        finalPath.pop();
    }
    cout<<finalPath.top()<<"<-";
    return 0;
}
