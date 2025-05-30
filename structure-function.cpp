// Question No "8";
//Page no : 224 ;
#include<iostream>
using namespace std;
struct student{// student is the name of the structure .. and simple struct means new data type like int , double , char etc .
    string name ;// name ,roll_no and GPA are the members of this structure . 
    int roll_no;
    double GPA;

};
 student copyinfo(student S1)// student is the above structure we are using it as return type like we use int , float etc as return type 
 {                           // copyinfo is the name of structure and inside the () S1 is the variable or object of the stuructre(student)
    return S1;
 }
 main()
 {
    student S1;// Here the student is the name of the structre and S1 is the object of it 
    S1.name="Muzammil Khan :";// THis is the declaration and initization steps .
    S1.roll_no= 40;
    S1.GPA=3.83;
    student S2=  copyinfo(S1);// here we are copying one structre argumnts to another .. simple info is copying from S1 to S2

    cout<<"The info are : "<<endl;// Printing or Displaying steps .
    cout<<" Name of the 2nd student is  : "<<S2.name<<endl;
    cout<<" Roll no of the student is : "<<S2.roll_no<<endl;;
    cout<<" GPA of the student is : "<<S2.GPA<<endl;
    cout<<"The End ! ";
    return 0;
 }