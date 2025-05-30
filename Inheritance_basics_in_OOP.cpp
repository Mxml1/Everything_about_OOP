#include<iostream>
using namespace std;
class Animal {
public :
void Eat ()
{
    cout<<" I CAN EAT :"<<endl;
}
void Sleep()
{
    cout<<" I CAN SLEEP :"<<endl;
}
};
class Dog : public Animal{

    public :
    void Bark ()
    {
        cout<<" I CAN BARK :"<<endl;
    }
};

int main()
{
    Dog D1;

    D1.Eat();
    D1.Sleep();
    D1.Bark();

    cout<<"---------";

return 0;
}
