#include<iostream>
using namespace std;
class Student
{
    public :
    string Name ;
    long int Cell_No;

    void Input_Stu_info(string N, long int C){
        Name = N;
        Cell_No = C;
    }

    void Show_Stu_Info()
    {
        cout<<"NAME IS :"<<Name<<endl;
        cout<<"CELL NO IS :"<<Cell_No<<endl;
    }
};

class Teacher : public Student
{
    public :
    string Subject;

    void Input_Tea_Info(string Sub)
    {
        Subject = Sub;
    }
    void Show_Tea_Info()
    {
        cout<<"SUBJECT IS :"<<Subject<<endl;
    }
    void Show_All_Info()
    {
        Show_Stu_Info();
        Show_Tea_Info();
    }
};
main()
{
    Teacher T1;
    T1.Input_Stu_info("Mxml",4703);
    T1.Input_Tea_Info("C++");
    cout<<"------------------"<<endl;
    T1.Show_All_Info();
    return 0;
}