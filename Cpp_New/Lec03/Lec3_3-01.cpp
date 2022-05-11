// oprators 
// pre-post increament-decreament

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
//       2     3
    i = i++ + ++i ;
//       1     3
    cout<<"i = "<<i<<endl; 
    
    
    return 0;
}