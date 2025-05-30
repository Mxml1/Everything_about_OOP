#include<iostream>
using namespace std;
struct Info{
    int code;
    string name ;
    string city;
    string country;
};
main()
{
    Info Info1 ;
    cout<<"Enter the Postal code : "<<endl;
    cin>>Info1.code;
    cout<<"Enter the Person Name : "<<endl;
    cin>>Info1.name;
    cout<<"Enter the City Name : "<<endl;
    cin>>Info1.city;
    cout<<"Enter the Country Name : "<<endl;
    cin>>Info1.country;
    
    cout<<" POSTAL CODE IS  : "<<Info1.code<<endl;
    cout<<" NAME IS  : "<<Info1.name<<endl;
    cout<<"CITY NAME IS : "<<Info1.city<<endl;
    cout<<"COUNTRY NAME IS : "<<Info1.country<<endl;
  return 0;
}