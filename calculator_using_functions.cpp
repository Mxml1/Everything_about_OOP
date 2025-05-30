#include<iostream>
using namespace std;

void sum(int x, int y )
{
    cout<<"Sum is : "<<x+y<<endl ;
}
//
void subtract( int x , int y )
{
    cout<<"Subtraction is : "<<x-y<<endl;
}
//
void multiply( int x , int y)
{
    cout<<"Multiplication is : "<<x*y<<endl;
}
//
void divide( int x , int y )
{
    cout<<"Division is : "<<x/y<<endl;
}
//
void remainder(int x , int y)
{
    cout<<"Remainder is : "<<x%y<<endl;
}
//
main()
{
    int x , y ;
    cout<<"Enter the value of X : ";
    cin>>x ;
    cout <<"Enter the value of Y : ";
    cin>>y;
    sum(x,y);
    subtract(x,y);
    multiply(x,y);
    divide(x,y);
    remainder(x,y);
        return 0;
}

