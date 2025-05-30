#include<iostream>
using namespace std;

void print_data(string name , string Blod_gp, int age)
{
    
    cout<<"NAME IS :"<<name<<endl;
    cout<<"BLOOD GROUP IS :"<<Blod_gp<<endl;
    cout<<"AGE IS :"<<age<<endl;
    
}

main()
{
    string name, Blod_gp;
    int age;
    cout<<"Enter name of the student : "<<endl;
    cin>>name;
    cout<<"Enter blood group of the student :"<<endl;
    cin>>Blod_gp;
    cout<<"enter age : "<<endl;
    cin>>age ;
    print_data(name,Blod_gp,age);
    return 0;


}

