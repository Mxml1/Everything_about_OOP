#include<iostream>
using namespace std;
class Info{
private :
int salary;
public :
string name;
int age ;
void Input_sal()
{
    cout<<"ENTER SALARY : "<<endl;
    cin>>salary;
}

void Display_sal()
{
    cout<<"THE SALARY OF THE PERSON IS : "<<salary<<endl;

}

};
main()
{
    Info P1;
    //P1.salary=123;
    P1.name="Muzammil Khan :";
    P1.age=19;
    P1.Input_sal();
    P1.Display_sal();

    //cout<<"SALARY IS :"<<P1.salary;
    return 0;
}