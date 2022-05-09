// data structure and algorithms
// divisible

#include<iostream>
using namespace std;

int main()
{
    for(int n=1; n<=100; n++)
    {
        if(n%3==0)
        {
            continue;
        }
        else
        {
            cout<<n<<" ";
        }
    }

    return 0;
}