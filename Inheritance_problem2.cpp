#include<iostream>
using namespace std;
class Animal{
    public :

    Animal()
    {
        cout<<"I AM ANIMAL CONSTRUCTOR :"<<endl;
    }
       virtual void Speak()
    {
          cout<<"ANIMAL SOUND! :";
    }
};
class Dog : public Animal{
    public :

    Dog()
    {
        cout<<"I AM A DOG CONSTRUCTOR :"<<endl;
    }
    void Speak()
    {
        cout <<"DOG BARKS! :"<<endl;
    }
    ~Dog()
    {
        cout<<"I AM DESTRUCTOR :";
    }

};
int main()
{
    
    Dog D;
    
    D.Speak();
    cout<<"---------------"<<endl;

    Animal * A =&D;
    A->Speak();
    return 0;
}