// Half Pyramid Usiing Number

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
            cout<<row;
        }
        cout<<endl;
    }
    
    return 0;
}