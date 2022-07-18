// Star Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int colm=1; colm<=n-row; colm++)
        {
            cout<<"  ";
        }
        for(int colm=1; colm<=2*row-1; colm++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int row=n; row>=1; row--)
    {
        for(int colm=1; colm<=n-row; colm++)
        {
            cout<<"  ";
        }
        for(int colm=1; colm<=2*row-1; colm++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}