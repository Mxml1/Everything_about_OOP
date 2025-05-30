#include<iostream>
using namespace std;
class Vehicle
{
    public:
    string type ;
    int tyres  ;

    void Input_Info1()
    {
        cout<<"ENTER WHAT TYPE OF VEHICLE IS :";
        cin>>type;
        cout<<"ENTER NUMBER OF TYPES IF PRESENT:";
        cin>>tyres;
    }

     void Show_Info1()
    {
        cout<<"TYPE IS :"<<type<<endl;
        cout<<"NO OF TYRES ARE :"<<tyres<<endl;
    }

};
class Car : public Vehicle
{
    public:
    string model ;
    int production_year;

    void Input_Info2()
    {
        Input_Info1();
        cout<<"ENTER MODEL OF THE CAR :";
        cin>>model;
        cout<<"ENTER YEAR OF PRODUCTION :";
        cin>>production_year;
    }

     void Show_Info2()
    {
        Show_Info1();
        cout<<"MODEL IS :"<<model<<endl;
        cout<<"PRODUCTION YEAR IS :"<<production_year<<endl;    
     }
    
};
class ElectricCar : public Car
{
    public:
    string name;
    string Production_Company;

    void Input_Info3()
    {
        Input_Info2();
        cout<<"ENTER NAME OF THE ELECTRIC CAR :";
        cin>>name;
        cout<<"ENTER PRODUCTION COMPANY NAME :";
        cin>>Production_Company;
    }

    void Show_Info3()
    {
        Show_Info2();
        cout<<"NAME OF THIS ELECTRIC VEHICLE IS :"<<name<<endl;
        cout<<"PRODUCTION COMPANY IS :"<<Production_Company<<endl;
    }

};


int main()
{
    ElectricCar E1;
    E1.Input_Info3();
    cout<<"--------------";

    E1.Show_Info3();

    return 0;
}