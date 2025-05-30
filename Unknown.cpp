#include<iostream>
using namespace std;
class Bank
{
private :
int Account_No;
float Balance ;
public :
string Name ;

void Input (string N , int A , float B)
{
    Name= N;
    Account_No= A;
    Balance= B;
    cout <<" MY NAME IS INPUT METHOD ! :"<<endl;
}

void print ()
{
    cout <<"NAME IS :"<<Name<<endl;
    cout<<"ACCOUNT NO IS :"<<Account_No<<endl;
    cout<<"ACCOUNT BALANCE IS :"<<Balance<<endl;
    cout<<"I AM OUTPUT METHOD :"<<endl;
}
void Deposit (float Amount=0.0)
{
    if(Amount > 0)
    {
        Balance = Balance + Amount;
        cout <<" "<<Amount<<" RS DEPOSITED SUCCESSFULLY :"<<endl;
        cout<<" BALANCE BECOME "<<Balance<<""<<endl;
    }
    else 
    {
        cout<<"SORRY INVALID DEPOSIT :"<<endl;
    }
}
void Withdraw (float Amount=0.0)
{
    if (Amount <= Balance && Amount > 0)
    {
        Balance = Balance-Amount;
        cout<<" "<<Amount<<" RS WITHDRAW SUCCESSFULLY :"<<endl;
    }
    else 
    {
        cout<<"SORRY INVALID WITHDRAW :"<<endl;
    }
}
};
int main()
{
    Bank B1 , B2 ;
    B1.Input("Mxml",4703,0.0);
    cout <<"---------------"<<endl;
    B1.print();
    cout <<"---------------"<<endl;
    B1.Deposit(1000.0);
    cout<<"---------------"<<endl;
    B1.Withdraw(5000.0);
    cout<<"---------------"<<endl;
    B1.print();
    cout <<"THE END :"<<endl;
    return 0;

}