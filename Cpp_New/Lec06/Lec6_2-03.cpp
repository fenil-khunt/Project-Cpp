// Factorial number

#include<iostream>
using namespace std;

int fact(int num)
{  int factorial=1;
   for(int i=2; i<=num; i++)
   {
    factorial*=i;
   }
   return factorial; 
}

int main()
{
    int num;
    cin>>num;

    cout<<fact(num)<<endl;
    
    return 0;
}