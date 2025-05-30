#include<iostream>
using namespace std;

class Employee {
    protected:
     string name ;
     float salary;

     public:
     void EmpInfo()
     {
        cout<<"Enter name of the Employee :"<<endl;
        getline (cin,name);
        cout<<"Enter Salary of this Employee :"<<endl;
        cin>>salary;
        cin.ignore();
     }
     void ShowEmpInfo()
     {
        cout<<"Name of the Emloyee is :"<<name<<endl;
        cout<<"Salary of this Employee is :"<<salary<<endl;
     }

};

class Manager : public Employee{

    protected:
    string WorkingArea;

    public :
    void ManagerInfo(){
    EmpInfo();
    cout<<"Enter the Working Area of the Manager(Account,Jobs etc) :"<<endl;
    getline (cin,WorkingArea);
    cin.ignore();

    }

    void ShowManagerInfo()
    {
        ShowEmpInfo();
        cout<<"Working Area of the Manager is : "<<WorkingArea<<endl;
    }

};
int main()
{
    Manager M1;
    M1.ManagerInfo();

    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl;

    M1.ShowManagerInfo();

     cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-"<<endl;



return 0;
}