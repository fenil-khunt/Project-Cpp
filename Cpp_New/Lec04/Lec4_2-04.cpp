// Number Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=n; row>=1; row--)
    {
        for(int colm=1; colm<=n; colm++)
        {
            if(colm<=row)
            {
                cout<<row;
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