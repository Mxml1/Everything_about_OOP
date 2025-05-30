#include<iostream>
using namespace std;
class Student {
    private :
    string Name;
    int RollNo;
    float Cgpa;
    public :
    void Input(){
        cout<<"Enter Name of the student :";
        getline(cin,Name);
        cout<<"Enter RollNo of the student :";
        cin>>RollNo;
        cout<<"Enter Cgpa of the student :";
        cin>>Cgpa;
        
    }
    void Display(){
        cout<<"Name is :"<<Name<<endl;
        cout<<"Roll No is :"<<RollNo<<endl;
        cout<<"CGPA is :"<<Cgpa<<endl;
    }
    Student()//Working with S2 Object
    {
       // cout<<"Hello ! : I am Default Constructor :";
        Name="MXml";
        RollNo=50;
        Cgpa=3.1;
    }
    Student(string nm,int r, float c){//Working for S3 object
       // cout<<"Hello! : I am Parameterized Constructor :";
        Name=nm;
        RollNo=r;
        Cgpa=c;
    }

};
main()
{
    Student S1,S2;
    S1.Input();
    S1.Display();
    S2.Display();
    Student S3("zarlish",1,4.0);
    S3.Display();
    Student S4(S3);
    S4.Display();
    return 0;
}