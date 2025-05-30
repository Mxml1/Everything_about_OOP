#include<iostream>
using namespace std ;
int recursive_sum(int x ,int y ){
    if (x==y);
    return x;
    return x + recursive_sum(x+1,y);
}
main(){
// int x , y ;
// cout<<"Enter the value of X : ";
// cin>>x ;
// cout<<"Enter the value of Y : ";
// cin>>y ;
int x=1, y=5;
cout<<recursive_sum(x,y);
return 0 ;
}