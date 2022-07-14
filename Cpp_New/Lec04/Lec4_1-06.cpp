// Floyd's Triangle

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int num=1,row=1; row<=n; row++)
    {
        for(int colm=1; colm<=row; colm++,num++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }

    return 0;
}