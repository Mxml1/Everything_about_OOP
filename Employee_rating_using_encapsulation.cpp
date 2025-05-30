#include<iostream>
using namespace std;
class Employee{
    private :
    float rating;
    public :
    string Name;
    int Emp_ID;
    void Setting ()
    {
        
        cout<<"ENTER NAME OF THE PERSON :"<<endl;
        cin>>Name;
        cout<<"ENTER ID OF THE EMPLOYEE :"<<endl;
        cin>>Emp_ID;
        cout<<"ENTER THE PERFORMANCE RATING OF THIS EMPLOYEE (OUT OF 5) :"<<endl;
        cin>>rating;
        
    }

    void Getting()
    {
        if (rating>=4.5){
            cout<<"PERFORMANCE IS EXCELLENT :";
        }
        else if (rating>=3.5){
            cout<<"PERFORMANCE IS GOOD :";
        }
        else {
            cout<<"PERFORMANCE IS AVERAGE :";
        }

    }

};
int main()
{
    Employee E1;
    E1.Setting();
    E1.Getting();
    cout<<"THE END ";
    return 0;
}