// oprators 
// pre-post increament-decreament

#include<iostream>
using namespace std;

int main()
{
    int i = 0;

//      1     0      1     0         after oprator velue
    i = i++ + i-- + ++i + --i ;
//      0     1      1     0         at a time oprator velue
    
    cout<<"i = "<<i<<endl; 
    
    return 0;
}