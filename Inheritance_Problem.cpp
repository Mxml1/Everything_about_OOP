#include<iostream>
using namespace std;
class Person
{
    protected :
    string name ;
    int age ;
    public :
    void Input1()
    {
        cout<<"ENTER NAME OF THE PERSON :";
        cin>>name;
        cout<<"ENTER AGE OF THE PERSON :";
        cin>>age;
    
    }
    void Output1()
    {
        cout<<"NAME IS :"<<name<<endl;
        cout<<"AGE IS :"<<age<<endl;
        
    }

} ;
class Student : public Person 
{
    protected :
    string student_ID;
    string course;

    public :
    void Input2()
    {
        Input1();
        cout<<"ENTER STUDENT ID :";
        cin>>student_ID;
        cout<<"ENTER COURSE :";
        cin>>course;
    }
    

    void Output2()
    {
        Output1();
        cout<<"STUDENT ID IS :"<<student_ID<<endl;
        cout<<"ENROLLED COURSE IS :"<<course<<endl;
    }

};

main()
{
    Student S1;
    S1.Input2();
    cout<<"------------";
    S1.Output2();
  
    return 0;
}