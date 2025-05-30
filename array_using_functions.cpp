//Que No 11, Page No 224
#include<iostream>
using namespace std;
void Display_even(int A[], int length)
{
    cout<<"Even values in the Array are  : ";
    int i;
    for(i=0;i<length;i++){
        if(A[i]%2==0)
        {
            cout<<A[i]<<" ";
        }
    }
    cout<<endl;
}
int Sum_of_odd(int A[], int length)
{
    int sum=0,i;
    for( i=0; i<length; i++)
    {
        if (A[i]% 2!=0)
        {
            sum=sum+A[i];
        }
    }
    return sum;

}
int main(){
const int length = 5;
int A[length];

cout<<"Enter "<<length<< " value "<<endl;
for(int i=0;i<length; i++){
    cout<<" Elements "<<i + 1 <<" : ";
    cin>>A[i];
    cout<<endl;
}

Display_even(A, length);
cout<<endl;
cout<<" ****************** "<<endl;

int Odd_sum;
cout<<"The sum of Odd Values of the Array are : "<<Sum_of_odd(A,length)<<endl;
return 0;
}