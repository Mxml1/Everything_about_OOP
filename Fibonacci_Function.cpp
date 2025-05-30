#include<iostream>
using namespace std;
void Fibo(int n)
{
    int F = 0;
    int S = 1;
    int Next;
    int i=0;

    cout<<"FIBONACCI SEQUENCE :";
    for (;i<n; i++)
    {
     if (i<=n)
        Next=i;
    else {
        Next=F+S;
        F=S;
        S=Next;
    }
    cout<<" "<<Next<<" ";
    }
    cout<<endl;
}
int main()
{
    int Term;
    cout<<"ENTER THE TERM :";
    cin>>Term;

    Fibo(Term);
    return 0;
}