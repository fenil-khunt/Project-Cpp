// Armstrong Number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int origional = n;
    int sum = 0;

    while(n>0)
    {
        int lastdigit = n%10;
        n = n/10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
    }
    
    if(sum==origional)
    {
        cout<<origional<<" is an Armstrong Number"<<endl;
    }
    else
    {
        cout<<origional<<"is not an Armstrong Number"<<endl;
    }
    
    return 0;
}