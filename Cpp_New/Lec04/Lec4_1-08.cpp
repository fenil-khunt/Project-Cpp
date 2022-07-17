// inverted Pattern using numbers

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1,num=n; row<=n,num>=1; row--,num--)
    {
        for(int colm=1; colm<=num; colm++)
        {
            cout<<colm<<" ";
        }
        cout<<endl;
    }

    return 0;
}