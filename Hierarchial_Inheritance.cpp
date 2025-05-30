#include<iostream>
using namespace std;
class A {
public :
void Fun_A ()
{
    cout<<"Hi, I am 'A' "<<endl;
}
};
class B : public A{
    public :
    void Fun_B()
    {
        
        cout<<"Hi, I am 'B' "<<endl;
    }
};
class C : public B{

};
class D : public C, public A{

};
int main()
{
    D obj;
    obj.Fun_B();
}