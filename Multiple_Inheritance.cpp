#include<iostream>
using namespace std;
class A {
    public :
    void Fun_A()
    {
        cout<<" MY NAME IS 'A' AND I AM BASE CLASS :"<<endl;
    }
};
class B{
    public :

    void Fun_B()
    {
        cout<<"MY NAME IS 'B' AND I AM ALSO BASE CLASS :"<<endl;
    }
    };
    class C :public A , public B{
public:
void Fun_C(){
    cout<<"MY NAME IS 'C' AND I AM DERIVED CLASS :"<<endl;
}

void Show_All()
{
    Fun_A();
    Fun_B();
    Fun_C();
}

    };
    int main()
    {
        C c1;
        c1.Show_All();
        return 0;
    }