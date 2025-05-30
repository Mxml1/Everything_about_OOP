#include<iostream>
using namespace std;
main(){
    int num,m,sum=0;
    cout<<"Enter the value of n :";
    cin>>num;
    cout<<"Enter the value of m :";
    cin>>m;
    for(int i=num;i<=m; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    cout<<endl;
    return 0;
}