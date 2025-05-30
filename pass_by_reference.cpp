#include<iostream>
using namespace std;
void swap ( int &x, int &y )
{
    int temp;
    temp = x ;
    x = y ;
    y = temp ;
   
}
main()
{
    int a = 15, b = 46 ;
    cout<<"Value of a before Swap is : "<<a<<endl<<"Value of b before Swap is :"<<b<<endl;
    swap(a,b);
    cout<<" ****************************************** :"<<endl;
    cout<<"Value of a after Swap is : "<<a<<endl;
    cout<<"Value of b after Swap is : "<<b<<endl;

    return 0;

    
}