#include<iostream>
using namespace std;

class Employee
{
    public :
    string name;

    void Emp ()
    {
        cout<<name<<" is Employee :"<<endl;
    }
};

class Tester :virtual public Employee
{
    public :
    void Tes()
    {
    cout<<name<<" is Testing Software :"<<endl;
    }
};

class Developer :virtual public Employee
{
    public:
    void Dev()
    {
        cout<<name<<" is Writing Code :"<<endl;
    }
};

class DevTester : public Tester , public Developer
{
   public:
   void AllTask()
   {
    Emp();
    Tes();
    Dev();
   }
};

int main()
{
    DevTester dt;
    dt.name="Maxxa";
    dt.AllTask();
    return 0;
}