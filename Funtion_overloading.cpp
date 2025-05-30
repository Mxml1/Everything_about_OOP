#include<iostream>
using namespace std;
int sum ( int x , int y )
{
    return x+y ;
}
double sum (double x , double y)
{
    return x + y ;
}
float sum ( float x , float y , float z)
{
    return x+y+z;
}

int main (){
    cout<<sum(10,5)<<endl;
    cout<<sum(10.5, 3.6)<<endl;
    cout<<sum(3.5,5.6,7.1);
    return 0;
}