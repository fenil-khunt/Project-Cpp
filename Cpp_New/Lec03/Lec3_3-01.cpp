// oprators 
// pre-post increament

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
//       2     3              after oprator velue
    i = i++ + ++i ;
//       1     3              at a time oprator velue
    cout<<"i = "<<i<<endl; 
    
    
    return 0;
}