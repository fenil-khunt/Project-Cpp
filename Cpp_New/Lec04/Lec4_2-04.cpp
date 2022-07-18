// Number Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int num=1,colm=n; num<=(row-colm),colm>=1; colm--)
        {
            if(colm<=row)
            {
                cout<<num<<" ";
                num++;
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