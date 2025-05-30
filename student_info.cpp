#include<iostream>
using namespace std;
class Student{
    public :
    string name;
    int RollNo;
    float CGPA;

    void input_info()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<"Enter Roll No :"<<endl;
        cin>>RollNo;
        cout<<"Enter CGPA of the person"<<endl;
        cin>>CGPA;
    }

    void Display_info()
    {
        cout<<"NAME OF THE STUDENT IS :"<<name<<endl;
        cout<<"ROLL NO OF THE STUDENT IS :"<<RollNo<<endl;
        cout<<"CGPA OF THE STUDENT IS :"<<CGPA<<endl;
    }

};
main()
{
    Student S1;
    S1.input_info();
    S1.Display_info();
    cout<<"THE END !";
    return 0;
}