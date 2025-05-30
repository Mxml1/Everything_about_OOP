#include<iostream>
using namespace std;
void Fibonacci(int num)
{
    int First = 0 , Second = 1 , Next;
    int i;
    cout<<"Fibonacci Sequence :";
    for (i=0 ; i<num ; i++)
    {
        if (num<=i)
            Next=i;
        else 
        {
            Next=First+Second;
            First=Second;
            Second=Next;
        }
        cout<<" "<<Next<<"";
    }
    cout<<endl;
}
int main()
{
    int Term;

    cout<<"ENTER THE TERM :"<<endl;
    cin>>Term ;

    Fibonacci(Term);
}

