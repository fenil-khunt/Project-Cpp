// Butterfly Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    int num=(2*n);

    cin>>n;

    for(int num=(2*n),row=1; row<=n; row++,num--)
    {
        for(int colm=1; colm<=(2*n); colm++)
        {
            if(colm<=row)
            {
                cout<<"*";
            }
            else if(num<=colm)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int num=n,row=n; row>=1; row--,num++)
    {
        for(int colm=1; colm<=(2*n); colm++)
        {
            if(colm<=row)
            {
                cout<<"*";
            }
            else if(num<colm)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
    return 0;
}