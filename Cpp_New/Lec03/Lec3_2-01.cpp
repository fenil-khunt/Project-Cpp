// multiple lenguage robot
// basics of switch

#include<iostream>
using namespace std;

int main()
{
    char Button;
    cout<<"input a character : ";
    cin>>Button;

    // if (Button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
        
    // else if (Button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }

    // else if (Button=='c')
    // {
    //     cout<<"Salut"<<endl;
    // }

    // else if (Button=='d')
    // {
    //     cout<<"Hola"<<endl;
    // }

    // else if (Button=='e')
    // {
    //     cout<<"Ciao"<<endl;
    // }
    
    // else
    // {
    //     cout<<"I still learning more !!"<<endl;
    // }


    switch (Button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;

    case 'b':
        cout<<"Hello"<<endl;
        break;

    case 'c':
        cout<<"Hello"<<endl;
        break;

    case 'd':
        cout<<"Hello"<<endl;
        break;

    case 'e':
        cout<<"Hello"<<endl;
        break;
    
    default:
    cout<<"I still learning more !!"<<endl;
        break;
    }

    return 0;
}