// oprators 
// pre-post increament-decreament

#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    int j = 20;
    int k;

//      09    10    19    20    09    19    10    20       after oprator velue
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++ ;
//      10    9    19    20    09    20    10    19        at a time oprator velue

    cout<<"k = "<<k<<endl; 
    
    return 0;
}


// ++a pre incriment-decrement = frist increse-decrese velue than use
// a++ post incriment-decrement = frist use velue than increse-decrese