#include<iostream>
using namespace std;
int Total(int A[10])
{
    int sum=0 , i;
    for (i = 0 ; i < 10 ; i++)
    {
        sum = sum + A[i];

    }
    int total= sum ;
    return total;
}
float Average(int A[10])
{
    int total = Total(A);
   return (float) total /10;
}
int Max (int A[10]){ 
    int i;
    int max ;
    max = A[0];
    for(i=0 ; i<=9 ;i++)
    {
        if (A[i]> max)
        max = A[i];
    }      
    return max;
}
int Min (int A[10]){ 
    int i;
    int min ;
    min = A[0];
    for(i=0 ; i<=9 ;i++)
    {
        if (A[i]< min)
        min = A[i];
    }
        
        
    return min;
}
main()
{
    int A[10],i;
    for (i =0 ; i<=9; i++)
    {
        cout<<"Enter the value of : "<<i+1<<endl;
        cin>>A[i];
    }
    for (i=0; i<=9 ; i++)
    {
        cout<<"The value of Element "<<i+1<<" is :"<<A[i]<<endl;

    }
   cout<<" TOTAL IS :"<< Total (A)<<endl;
   cout<<"AVERAGE IS :"<<Average (A)<<endl;
   cout<<" MAXIMUM VALUE IN THE ARRAY IS : "<<Max(A)<<endl;
   cout<<" MINIMUM VALUE IN THE ARRAY IS : "<<Min(A)<<endl;
   
return 0;
    
}