#include<iostream>
using namespace std;

int Fibonacci(int num)
{
    if (num<=1)
    return num;
    else {
        return Fibonacci(num-1)+Fibonacci(num-2);
    }
}
int main()
{
    int terms ;
    int i;
    cout<<"ENTER THE TERM :";
    cin>>terms;

    for (i=0 ; i<terms; i++)
    {
        cout<<" "<<Fibonacci(i);
    }
    cout<<endl;

    return 0;
}