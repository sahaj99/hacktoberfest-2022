#include<iostream>
using namespace std;
int main()
{
    char button;
    
    cout<<"enter your button :"<<endl;
    cin>>button;
    switch (button)
    {
    
    case 'a':
        cout<<"Hello..!"<<endl;
        break;
        case 'b':
        cout<<"Hola..!"<<endl;
        break;
        case 'c':
        cout<<"Namste..!"<<endl;
        break;
        case 'd':
        cout<<"ciao..!"<<endl;
        break;
        case 'e':
        cout<<"or bhai..!"<<endl;
        break;
    
    default:
    cout<<"I am still learning..!"<<endl;
        break;
    }
}
