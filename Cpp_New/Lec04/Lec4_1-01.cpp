//Filled Rectangular Pattern

#include<iostream>
using namespace std;

int main()
{
   int row,colm;
   cin>>row>>colm;

   for(int i=1; row>=i; i++)
   {
    for(int j=1; colm>=j; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }

    
    return 0;
}