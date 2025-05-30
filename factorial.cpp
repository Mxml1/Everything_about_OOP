#include<iostream>
using namespace std ;
main()
{
    int num;
    cout<<"Enter Any number : ";
    cin>>num ;
    int fact=1 , i;
    for( i=num; i>=1; i--)
    fact =fact * i ;
    cout<<"Factorial of this number is : "<<fact <<endl;
    return 0;
}