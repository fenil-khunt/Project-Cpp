// Ptint all prime numbers between 2 given numbers

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    for(int j=num1; j<=num2; j++)
    {
        if(isPrime(j)==true)
        {
            cout<<j<<"  ";
        }
        
    }
    
    return 0;
}