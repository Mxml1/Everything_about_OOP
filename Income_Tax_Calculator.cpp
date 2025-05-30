#include<iostream>
using namespace std;
main()
{
    double income ,Tax , Exceeding_Amount ;
    cout<<" ENTER INCOME OF THE PERSON : "<<endl;
    cin>>income;
    if (income <= 600000)
    {
        cout <<" NO TAX :"<<endl;
    }
    else if (income>600000 && income<1200000)
    {
        Exceeding_Amount= income-600000;
        Tax= Exceeding_Amount* 0.05;
        cout<<" TAX IS : "<<Tax <<" RS ."<<endl;
    }
    else if (income>1200000 && income <2200000)
    {
        Exceeding_Amount= income-1200000;
        Tax= Exceeding_Amount* 0.15+30000;
        cout<<"TAX IS :"<<Tax<<" RS ."<<endl;
    }
    else if (income>2200000 && income<3200000)
    {
        Exceeding_Amount= income-2200000;
        Tax= Exceeding_Amount* 0.25+180000;
        cout<<"TAX IS :"<<Tax<<" RS ."<<endl;
    }
    else if (income>3200000 && income<4100000)
    {
        Exceeding_Amount= income-320000;
        Tax= Exceeding_Amount* 0.30+430000;
        cout<<"TAX IS :"<<Tax<<" RS ."<<endl;
    }
    else if (income>4100000)
    {
        Exceeding_Amount= income-4100000;
        Tax= Exceeding_Amount* 0.35+700000;
        cout<<"TAX IS :"<<Tax<<" RS ."<<endl;
    }
    else {
        cout<<"SORRY INVALIDITY :"<<endl;
    }


    return 0;
}