#include<iostream>
using namespace std;
int mystery (int x , int y , int z)
{
    if (x<=y && x<=z){
    return (y + z - x);
}
    else if (y <=z &&  y <= x){
        return (z + x - y);
    }
    else {
    return ( x + y -z);
    }
    
}
main()
{
    cout<<mystery(7,8,3)<<endl;
    cout<<mystery(10,5,30)<<endl;
    cout<<mystery(10,10,10);
    return 0;
}