#include<iostream>
using namespace std;
main()
{
    int num ;
    cout<<"Enter any Number : ";
    cin>>num;
    if (num<=1)
    {
        cout<<"Number is Neither Prime nor Composite : ";
    }
    else 
    {
        int i ,count=0;
        for(i=1;i<=num;i++){
            if(num%i==0)
            count++;
        }
        if(count<=2)
        {
            cout<<"Number is Prime : ";
        }
        else {
            cout<<"Number is Composite : ";
        }
    }
    cout<<num;
    return 0;
}