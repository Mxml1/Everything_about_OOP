//Que No 09 . Page No 224 .
#include<iostream>
using namespace std;
int power(int base, int exponent)// power is the name of function,base and exponent are its arguments
{
    int i,result=1;
    for(i=1;i<=exponent;i++)// for e.g exponent is 3 so i=1 is less than 3 so iteration begins 
    { 
       result =result*base;// r,g base is 2 .. and in first iteration or cycle the result is 1 .
// so 1 * 2 =2 .. in second iteration result is 2  and base is also 2 so 2* 2=4.
// now in 3rd iteration result is 4 and base is still 2 so 4 *2 =8 so final ans is 8 .
// ..cuz after this the above conditionfor(i=1;i<=exponent;i++) and i have entered exponent as 3 becomes false 
    }
    return result;
}
main()
{
    int base, exponent;
    cout<<"Enter the base value : "<<endl;
    cin>>base;
    cout<<"Enter the exponent value : "<<endl;
    cin>>exponent;
    cout<<" Answer is : "<< power(base,exponent);// calling of the function .
    return 0;
    
}