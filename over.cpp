#include<iostream>
using namespace std;
int sum(int x ,int y)
{
    return x +y ;

}
double sum (double x , double y)
{
    return x + y;
}
float sum(float x, float y)
{
    return x +y ;
}

main()
{
    cout<<"sum of int is : "<<sum(5,6)<<endl;
    cout<<" sum of double is : "<<sum(11.3,43.1)<<endl;
    cout<< " sum of float is :"<<sum(5.6,6.3);
}