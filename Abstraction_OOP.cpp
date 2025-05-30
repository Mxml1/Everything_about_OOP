#include<iostream>
using namespace std;

class MobilePhone{
    public :
    virtual void  MakeACall() =0 ;

};
class AndroidPhone : public MobilePhone{
    public :
    void MakeACall()
    {
        cout<<" Android Calling 📲\n";
    }
};
class iPhone : public MobilePhone{
    public:
    void MakeACall()
    {
        cout<<" iPhone Calling 📲\n";
    }

};

int main()
{
    MobilePhone*M1 = new AndroidPhone;
    M1->MakeACall();
    MobilePhone*M2 = new iPhone;
    M1->MakeACall();
    return 0;
}