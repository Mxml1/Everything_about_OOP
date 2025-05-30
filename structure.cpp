#include<iostream>
using namespace std;
struct Student {
    string name ;
    int rollNo;
    double GPA;
    string DEPT ;
};
main()
{
Student S1, S2;
cout<<"ENter name of the student : "<<endl;
cin>>S1.name;
cout<<"ENter roll no of the student : "<<endl;
cin>>S1.rollNo;
cout<<"ENter GPA of the student : "<<endl;
cin>>S1.GPA;
cout<<"Enter department name of the student is : "<<endl;
cin>>S1.DEPT;

S2=S1;// we can only compare two objects and can't perfrm arithmetic operations on it .
cout<<"NAME of the 2nd Person is : "<<S2.name<<endl;
cout<<"ROLL NO of the 2nd Person is : "<<S2.rollNo<<endl;
cout<<"GPA of the 2nd Person is : "<<S2.GPA<<endl;
cout<<"DEPT of the 2nd Person is : "<<S2.DEPT<<endl;

return 0;

}
