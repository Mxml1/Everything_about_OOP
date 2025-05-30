#include<iostream>
using namespace std;
struct Studentrecord {
    char Name[20], Address[30];
    int PhoneNo , RollNo;
    
};
main()
{
    Studentrecord x;
    cout<<"Enter name : ";
    cin>>x.Name;
    cout<<"Enter Address : ";
    cin>>x.Address;
    cout<<"Enter Phone No : ";
    cin>>x.PhoneNo;
    cout<<"Enter Roll No : ";
    cin>>x.RollNo;
    return 0;

}