#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    if(n<=1){
        cout<<"Number is neither Prime nor Composite :";
    }else{
  bool isPrime= true ;
  int i;
  for ( int i=2; i<n; i++)
  {
    if(n%i==0)
    isPrime=false;
    break;
  }

  if (isPrime){
    cout<<"Number is Prime : "<<endl;

  }
  else{
    cout<<"Number is Composite : "<<endl;

  }
    }
    return 0;
}