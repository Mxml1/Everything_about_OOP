#include<iostream>
using namespace std;
class Bank_system{
    private :
    int AccountNo;
    float Balance;

    public :
    string Name;

    Bank_system()
    {
        Name=" ? ";
        AccountNo= 4703;
        Balance=999.9;
        cout<<"I am Non Parametrized Constructor :"<<endl;
    }

    Bank_system(string N, int A, float B)
    {
        Name=N;
        AccountNo=A;
        Balance=B;
        cout<<"I am Parametrized Constructor :"<<endl;
    }
    void Display ()
    {
        cout<<"NAME IS :"<<Name<<endl;
        cout<<"ACCOUNT NO IS :"<<AccountNo<<endl;
        cout<<"BALANCE IS :"<<Balance<<endl;
    }

    void Deposit(float Amount)
    {
        if (Amount>0)
        {
            Balance= Balance+Amount;
            cout<<" :"<<Amount<< "DEPOSIT SUCCESSFULLY :"<<endl;
        }
        else 
        {
            cout<<"INVALID AMOUNT DEPOSIT "<<endl;
        }
    }

    void WithDraw (float Amount) {
            if (Amount<=Balance && Amount >0)
            {
                Balance = Balance - Amount;
                cout<<" :"<<Amount<<"WITHDRAW SUCCESSFULLY :"<<endl;
            }
            else
             {
                cout<<"INVALID AMOUNT WITHDRAW "<<endl;
            }
        }
    

    ~Bank_system()
    {
    cout <<"I am Destructor "<<endl;
    }
    
};
main()
{
    Bank_system B1("Name",123,567890);
   Bank_system B2;
   B1.Deposit(1000);
   B1.WithDraw(1000);

   B2.Display();
   return 0;
}