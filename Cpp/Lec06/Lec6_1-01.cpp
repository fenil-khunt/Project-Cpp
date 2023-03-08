// Addition of two numbers using functions 

#include<iostream>
using namespace std;

void print(int num)
{
    cout<<num<<endl;
}

int addition(int num1,int num2)
{   
    int sum = num1 + num2 ;
    return sum; 
}

int main()
{
    int n1=1,n2=2;
    print(addition(n1,n2));     
    
    return 0;
}

