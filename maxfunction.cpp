#include<iostream>
using namespace std;

void Max (int x , int y ){
    if (x>y)
    {
        cout<<"X is greater ";
    }
    else {
    cout<<"Y is greater ";
    }
}
int main()
{
    int x , y ;
    cout<<"Enter value of x : "<<endl;
    cin>>x ;
    cout<<"Enter value of Y "<<endl;
    cin>>y;
    Max(x,y);
    return 0;
}