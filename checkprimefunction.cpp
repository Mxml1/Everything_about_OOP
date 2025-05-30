// Que No 10 page no 224
#include<iostream>
using namespace std;
void checkprime(int num)
{
    if(num<=1){
        cout<<"Nmber is neither Prime nor Composite : ";
    }
    else{
        bool isPrime=true;
        int i;
        for ( i=2; i<num; i++){
            if(num%i==0)
            isPrime=false;
            break;
        }
        if (isPrime)
        {
            cout<<"Number is Prime : ";
        }
        else {
            cout<<"Number is Composite : ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    checkprime(n);
}