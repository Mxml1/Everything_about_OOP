#include<iostream>
using namespace std ;
struct Employee{
    int Emp_no;
    float Em_compensation;
};
main()
{
    Employee E[3];
    int i;
    for (i=0;i<3;i++)
    {
        cout<<"Enter the Employee No "<<i+1<<" : "<<endl;
        cin>> E[i].Emp_no;
        cout<<"Enter the Employee Compensation  "<<i+1<<" : "<<endl;
        cin>>E[i].Em_compensation;
    }
    for(i=0;i<3;i++){
    cout << "Employee " << i+1 << " Details:" << endl;
    cout<<"The Employee No of :" <<E[i].Emp_no<<endl;
    cout<<"The Employee Compensation of : " <<E[i].Em_compensation<<endl;
    
    }
    return 0;
}