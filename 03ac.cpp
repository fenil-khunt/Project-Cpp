//if else statments

#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int savings;
    cin>>savings;

    if(savings>5000)
    {
        if(savings>10000){cout<<"Road Trip with Neha";}
        else{cout<<"Shoping with Neha";}
    }

    else if (savings>2000)
    {
        cout<<"Rashmi\n";
    }

    else 
    {
        cout<<"Friend\n";
    }

    return 0;
}