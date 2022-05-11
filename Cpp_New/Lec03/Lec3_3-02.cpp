// oprators 
// pre-post increament

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 2;
    int k;

//      1   2   2      3     3     4                after oprator velue
    k = i + j + i++ + j++ + ++i + ++j ;
//      1   2   1      2     3     4                at a time oprator velue
    cout<<"k = "<<k<<endl; 
    
    
    return 0;
}