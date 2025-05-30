#include<iostream>
using namespace std;

class Complex{
    public:
    float  real , imag;

    Complex(float r=0 , float i=0) : real(r) ,imag(i){}

    Complex operator+ (const Complex& obj){
        return Complex(real + obj.real ,imag + obj.imag);
    }
    void Display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

};
int main()
{
    Complex C1(3.7,5.6) , C2(1.0,3.1);
    Complex C3=C1+C2;
    C3.Display();
    return 0;
}