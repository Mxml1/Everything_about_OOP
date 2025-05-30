#include<iostream>
using namespace std;
 int AreaofCircle (int )
 {
    int Area;
    const float Pi=3.14;
    Area = Pi*r*r;
return Area;
    
 }
 int main()
 {
    int r;
    cout<<"ENTER VALUE OF r :"<<endl;
    cin>>r;
    cout<<"AREA IS :"<<AreaofCircle(r)<<endl;
    return 0;
 }