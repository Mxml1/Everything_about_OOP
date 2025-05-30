#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int num ;
    cout<<"Enter any number : ";
    cin>>num;
    if (num<=1)
    {
        cout<<"Number is neither Prime nor Composite :";
    }
    else{
        bool IsPrime=true;
        int i;
        for(i=2; i<=sqrt(num); i++){
            if(num%i==0)
            IsPrime=false;
            break;
        }
        
        if(IsPrime){
            cout<<"Number is Prime : ";
        }
        else{
            cout<<"Number is Composite : ";
        }
    }

    return 0;
}