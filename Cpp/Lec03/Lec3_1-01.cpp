// data structure and algorithms

#include<iostream>
using namespace std;

int main()
{
    int PoketMoney = 3000;
    for(int date=1; date<=30; date++)
    {
        if(date%2==0)
        {
            continue;
        }

        if(PoketMoney==0)
        {
            break;
        }

        cout<<date<<" : Go out Today !"<<endl;
        PoketMoney = PoketMoney - 300;
    }
    
    return 0;
}