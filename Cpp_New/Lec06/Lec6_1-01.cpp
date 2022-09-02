// Addition of two numbers using functions 

#include<iostream>
using namespace std;

int addition(int num1,int num2)
{
    int sum = num1 + num2 ;
    return sum; 
}

int n1=1,n2=2;

int main()
{
    cout<<"the sum is "<<addition(n1,n2)<<endl;     
    
    return 0;
}