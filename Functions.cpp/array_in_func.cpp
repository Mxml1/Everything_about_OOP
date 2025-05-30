#include<iostream>
using namespace std;
// void Total(int A[10])
// {
//     int sum=0 , i;
//     for (i = 0 ; i < 10 ; i++)
//     {
//         sum + = A[i];

//     }
// }
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
        cout<<"The value of Element "<<i+1<<" is :"<<A[i];

    }
return 0;
    
}