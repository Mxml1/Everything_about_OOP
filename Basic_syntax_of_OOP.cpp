#include<iostream>
using namespace std;

class Car
{
    public :
    string name;
    int seats;

    void Start()
    {
        cout<<"CAR IS STARTING :"<<endl;
    }
};

main()
{
    Car Mycar;
    Mycar.name="Lambo";
    Mycar.seats=2;
    Mycar.Start();

    cout<<" :"<<Mycar.name<<endl;
    cout<<" :seats "<<Mycar.seats<<endl;
    cout<<" EXECUTED ! ";
    return 0;


}


