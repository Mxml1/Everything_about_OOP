#include<iostream>
using namespace std;
main()
{
    int x , y ;
    char artm_oper;
    cout<<"Enter value of X : ";
    cin>>x ;
    cout<<"Enter value of Y : ";
    cin>>y ;
    cout<<"Enter an arithmetic operator : ";
    cin>>artm_oper;

    switch (artm_oper)
    {
        case '+':
        cout <<" The addition of "<<x<<" and "<<y <<" is :"<<x+y ;
        break;
        case '-':
        cout <<" The subtraction of "<<x<<" and "<<y <<" is :"<<x-y ;
        break;
        case '*':
        cout <<" The multiplication of "<<x<<" and "<<y <<" is :"<<x*y ;
        break;
        case '/':
        cout <<" The division of "<<x<<" and "<<y <<" is :"<<x/y ;
        break;
        case '%':
        cout <<" The remainder of "<<x<<" and "<<y <<" is :"<<x*y ;
        break;
        default:
        cout<<"Invalid input :";
        

    }

    return 0;
}