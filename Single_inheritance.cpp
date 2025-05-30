#include<iostream>
using namespace std;
class A {

    public :
     void Func_A()
     {
        cout<<" I AM PARENT CLASS :"<<endl;
     }
};

class B : public A{

};
main()
{
    B b1;
    b1.Func_A();
    cout<<"THE END !"<<endl;


    return 0;
}