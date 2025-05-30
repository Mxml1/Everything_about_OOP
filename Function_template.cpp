//Que No 13 .PAge no 224 ..
#include<iostream>
using namespace std;
template <typename T>// the words template and typename are keywords . 
T FindGreater(T x, T y) //T stands for template .. FindGreate is the name of function 
{
    if(x>y)
    return x ;
    else
    return y;

}
main(){
int x , y;
cout<<"Enter the value of X : ";
cin>>x;
cout<<"Enter the value of Y : ";
cin>>y;
cout<<" Greater is : "<< FindGreater(x,y)<<endl;// calling of the function .
return 0;
}
