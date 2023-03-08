// Zig-Zag Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=3; row++)
    {
        for(int colm=1; colm<=n; colm++)
        {
            if(colm%4==0 & row==2 || (row+colm)%4==0 )
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