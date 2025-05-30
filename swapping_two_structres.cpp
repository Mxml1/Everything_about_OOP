#include<iostream>
using namespace std;
struct Info
{
    int code;
    string name;
    string city;
    string country;
};

main()
{
    Info info1, info2;
    cout<<"Enter the First Postal Code : "<<endl;
    cin>>info1.code;
    cout<<"Enter the First Person Name : "<<endl;
    cin>>info1.name;
    cout<<"Enter the First City Name : "<<endl;
    cin>>info1.city;
    cout<<"Enter the First Country Name : "<<endl;
    cin>>info1.country;
    cout<<"******************************************"<<endl;

    cout<<"Enter the Second Postal code : "<<endl;
    cin>>info2.code;
    cout<<"Enter the Second Person Name  : "<<endl;
    cin>>info2.name;
    cout<<"Enter the Second City Name : "<<endl;
    cin>>info2.city;
    cout<<"Enter the Second Country Name : "<<endl;
    cin>>info2.country;
    cout<<"************************************************"<<endl;

    Info temp;
    temp = info1;
    info1 = info2;
    info2 = temp;

    cout<<"The  Postal code is : "<<info1.code<<endl;
    cout<<"Name of the Person is  : "<<info1.name<<endl;
    cout<<"City Name is  : "<<info1.city<<endl;
    cout<<"Country Name is  : "<<info1.country<<endl;

cout<<"***************************************************"<<endl;

    cout<<"The Second Postal code is : "<<info2.code<<endl;
    cout<<"Name of the Person is  : "<<info2.name<<endl;
    cout<<"City Name is  : "<<info2.city<<endl;
    cout<<"Country Name is  : "<<info2.country<<endl;

    return 0;
    
 
}