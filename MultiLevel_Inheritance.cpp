#include<iostream>
using namespace std;
class A{
    public :
    void Fun_A()
    {
        cout<<" HI! I AM 'A' "<<endl;
    }
};
class B : public A{
    public :
    void Fun_B()
    {
        cout<<"HI! I AM 'B' "<<endl;
    }
};

class C : public B{
    public :
};
int main ()
{
    C c1;
    c1.Fun_A();
    c1.Fun_B();
    return 0;

}