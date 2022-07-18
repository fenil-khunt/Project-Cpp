// Palindromic Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int colm=n; colm>=1; colm--)
        {            
            if(colm<=row)
            {
                for(int num=row; num>=1; num--,colm--)
                {
                    cout<<"*"<<" ";
                }
                for(int num=2; num<=row; num++,colm--)
                {
                    cout<<"*"<<" ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int row=n; row>=1; row--)
    {
        for(int colm=1; colm<=n; colm++)
        {            
            if(colm>=row)
            {
                for(int num=row; num<=1; num++,colm++)
                {
                    cout<<"*"<<" ";
                }
                for(int num=2; num>=row; num--,colm++)
                {
                    cout<<"*"<<" ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}