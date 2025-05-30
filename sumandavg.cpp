#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the value of x : ";
    cin >> x;
    cout <<"Enter the value of y : "<<endl;
    cin>>y;
    float sum=0.0 , avg=0.0;
    sum=x+y;
    cout<<"The Sum is : "<<sum<<endl;
    avg=sum/2;
    cout<<"The Average is : "<<avg<<endl;
    return 0;

}