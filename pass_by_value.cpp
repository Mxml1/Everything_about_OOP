#include<iostream>
using namespace std;
void change_x(int  &x){// void is return type , change_x is name of the function and x is argument of the function
    
    x=2000;
    x++;
   
    }
main()
{
    int x=19;// 
    change_x(x);
    cout<<" Value of x in main function is : "<<x;
    return 0;
}
 // Pass by value is a method of passing arguments to a function where a copy of the actual value
 // is made and given to the function. This means that any changes made to the parameter inside
 // the function do not affect the original value outside the function.