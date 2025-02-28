#include <iostream>
#include <stack>
#define n 7

using namespace std;

int minValue=100000,finalIndex=n-1;
stack<int>finalStack;

void spp(int data[n][n],int initialIndex,stack<int>tempStack,int value)
{
    if(initialIndex!=finalIndex)
    {
        for(int i=0;i<n;i++)
        {
            if(data[initialIndex][i]!=0)
            {
                tempStack.push(i);
                cout<<data[initialIndex][i]<< ", ";
                value=value+data[initialIndex][i];
                spp(data,i,tempStack,value);
                value=value-data[initialIndex][i];
                tempStack.pop();
            }
        }
    }
    else
    {
        if (minValue>value)
        {
            minValue=value;
            finalStack=tempStack;
        }
        cout<<"-- "<<value<<endl;
    }
}

int main()
{

    int data[n][n]={{0,5,7,4,0,0,0},
                    {0,0,0,0,3,0,0},
                    {0,0,0,0,5,4,2},
                    {0,0,1,0,0,2,0},
                    {0,0,0,0,0,0,4},
                    {0,0,0,0,0,0,6},
                    {0,0,0,0,0,0,0}
                    };
    int initialIndex=0,value=0;
    stack<int> tempStack;
    tempStack.push(initialIndex);
    spp(data,initialIndex,tempStack,value);

     while(!finalStack.empty())
      {
        cout << finalStack.top() << ", ";
        finalStack.pop();
      }
      cout<<"Min Value: "<<minValue<<endl;
    return 0;
}
