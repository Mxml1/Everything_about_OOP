#include<iostream>
using namespace std;
void max_3(int x , int y, int z){
    if(x>y & x>z){
        cout<<"X is greatest :";}
        else
        cout<<"Y is greatest :";
       


}
main()
{
    int a,b,c;
    cout<<"Enter value of  x: ";
    cin>>a;
    cout<<"Enter value of  y: ";
    cin>>b;
    cout<<"Enter value of  z: ";
    cin>>c;
    max_3(a,b,c);
    return 0;
}