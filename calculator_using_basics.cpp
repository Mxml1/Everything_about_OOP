#include<iostream>
using namespace std;
int main()
{
    int x, y ;
   cout<<"Enter the value of X :";
   cin>>x ;
   cout<<"Enter the value of Y :";
   cin>>y ;
   int addition , subtraction , multiplicaton, division , remainder ;
   addition = x + y;
   cout<<"Addition of X and Y is : "<<addition<<endl;

   subtraction = x - y;
   cout<<"Subtraction of X and Y is : "<<subtraction<<endl;

   multiplicaton = x * y;
   cout<<"Multiplication of X and Y is : "<<multiplicaton<<endl;

   division = x / y;
   cout<<"Division of X and Y is : "<<division<<endl;

   remainder = x % y;
   cout<<"Remainder of X and Y is : "<<remainder<<endl;
   
    return 0;

}