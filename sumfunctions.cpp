#include<iostream>
using namespace std ;
int sum( int x , int y)//in this line the "sum" is the name of funtion while the "x nd y" are parameters of the function
{
    return x + y;//the return is used because it is returning some thing e.g here it is the returning the value of x +y 
}
main(){
    int x , y;//here the x and y are the arguments and can be of same name as defined as in funtion
    //or can be of different name such as a and b. 
    cout<<"Enter the value of X : ";
    cin>>x;
    cout<<"Enter the value of Y :  ";
    cin>>y;
    cout<<sum(x,y);//here the funtion(sum) is called to perform its funtion .
    return 0;

}