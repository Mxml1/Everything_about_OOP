#include<iostream>
using namespace std;
class Student{
private :
int Marks;
public :
string name;
int Roll_NO;

void Input()
{
    cout<<"ENTER NAME OF THE STUDENT :"<<endl;
    cin>>name;
    cout<<"ENTER ROLL NO OF THE STUDENT :"<<endl;
    cin>>Roll_NO;
    cout<<"ENTER MARKS OF THE STUDENT BETWEEN 0 AND 100 :"<<endl;
    cin>>Marks;
    if (Marks >0 && Marks <=100){
        cout<<"INPUT OF MARKS IS VALID :"<<endl;
    }
    else {
        cout<<"INVALID INPUT :"<<endl;
        Marks = -1;
    }

}
void Display()
{
    if (Marks ==-1)
    {
        cout<<" SORRY INVALID INPUT SO WE CANNOT DISPLAY RESULT "<<endl;
        return ;
    }
    cout <<"NAME IS :"<<name<<endl;
    cout <<"ROLL NO IS :"<<Roll_NO<<endl;
    cout <<"MARKS IS :"<<Marks<<endl;

    if (Marks >=85)
    {
         cout<<"RESULT : EXCELLENT"<<endl;
    }
    else if (Marks >=60)
    {
         cout<<"RESULT : GOOD"<<endl;
    }
    else if (Marks >=40)
    {
         cout<<"RESULT : AVERAGE"<<endl;
    }
    else 
    {
        cout<<"RESULT : FAIL"<<endl;
    }
}

};
main()
{
    Student S1 ;
    S1.Input();
    S1.Display();
    return 0;
}