#include<iostream>
using namespace std;
void Factorial(int num ){//factoral is the name of function and num is its argument
    int i ,fact=1;
    for ( i=1; i<=num; i++)// u can take it from both forward or reverse side for( i=num; i>=1; i--)
    fact=fact * i ;
    cout<<fact ;
}
main()
{
    int x ; 
    cout<<"Enter any number :";
    cin>>x;
    Factorial(x);// calling of the function 
    return 0 ;
}