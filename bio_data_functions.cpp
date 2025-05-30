//Que No 3 .Page No 224.
#include<iostream>
using namespace std ;
void bio_data(string name , int age, string gender,string blood_GP)
//bio_data is the name of functions and inside the () are arguments of the function
{
    cout<<" Name is  : "<<name<<endl;
    cout<<" Age is  : "<<age<<" Years " <<endl;
    cout<<" Gender is  : "<<gender<<endl;
    cout<<" Blood Group is  : "<<blood_GP<<endl;   
}
main()
{
    string name = " Muzammil Khan ";
    int age =19;
    string gender =" Male ";
    string blood_GP = " B+";
 
bio_data(name,age,gender,blood_GP);//Function calling 
cout<<" Execution Successfull";

    return 0;
}