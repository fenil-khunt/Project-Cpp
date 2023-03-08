// Triangular Binary Pyramid

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int colm=1; colm<=row; colm++)
        {
            if((row+colm)%2==0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}