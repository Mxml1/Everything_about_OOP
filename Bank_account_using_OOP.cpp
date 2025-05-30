#include<iostream>
using namespace std;

class Account_Holder {
private:
int Acc_No;
float Balance;
public :
string Name;

void SetDetails(int NO , float Bal, string name){
    Acc_No=NO;
    Balance=Bal;
    Name=name;
}
void DisplayDetails(){
    cout<<"THE ACCOUNT NUMBER IS : "<<Acc_No<<endl;
    cout<<"BALANCE IN THIS ACCOUNT IS : "<<Balance<<endl;
    cout<<"NAME OF THE ACCOUNT HOLDER IS : "<<Name<<endl;
}

};
int main()
{
    Account_Holder A1;
    A1.SetDetails(1234,54000.00,"Mxml Khan");
    A1.DisplayDetails();
    cout<<"THE END ! ";
    return 0;
}