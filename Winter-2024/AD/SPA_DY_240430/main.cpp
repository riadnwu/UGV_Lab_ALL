#include <iostream>
#include<stack>
#define n 4

using namespace std;
int data[n][n]={{0,9,8,12},
                {0,0,0,1},
                {0,0,0,10},
                {0,0,0,0}};

stack<int> solutio;
int minValue=100000,fdx=n-1;

void PrintStack(stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
        return;


    int x = s.top();

    // Pop the top element of the stack
    s.pop();

    // Recursively call the function PrintStack
    PrintStack(s);

    // Print the stack element starting
    // from the bottom
    cout << x << " ";

    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}

void spa(int idx,int tempMin,stack <int> tempSolution)
{

    if(idx<fdx)
    {
        for(int i=0;i<n;i++)
        {
            if(data[idx][i]!=0)
            {

                tempSolution.push(data[idx][i]);
                tempMin=tempMin+data[idx][i];
                //cout<<"MIn Value: "<<tempMin<<endl;
                spa(i,tempMin,tempSolution);
                tempSolution.pop();
                tempMin=tempMin-data[idx][i];
            }
        }
    }
    else
    {
        PrintStack(tempSolution);
        cout<<endl;
        if(tempMin<minValue)
        {
            solutio=tempSolution;
            minValue=tempMin;
        }
    }
}


int main()
{
    int idx=0;
    stack <int> tempSolution;
    int tempMin=0;
    spa(idx,tempMin,tempSolution);

    cout<<"Final Soltion: "<<minValue;
    return 0;
}
