#include<iostream>
using namespace std;
class Shape{
    public :
    virtual void Shape_1()
    {
        cout<<"I AM A SHAPE MAKER "<<endl;
    }
};

class Circle : public Shape{
    public:
    void Shape_1()
    {
        cout<<"I AM CIRCLE "<<endl;
    }
};
class Square : public Shape{
    public :
    void Shape_1()
    {
        cout<<"I AM SQUARE "<<endl;
    }   
};
int main()
{
    Shape* ptr;
    Circle C1; 
    Square SQ_1;
    
    ptr = &C1;
    ptr->Shape_1();
    cout<<"-----------"<<endl;

    ptr = &SQ_1;
    ptr->Shape_1();

    cout<<"-------------"<<endl;
    return 0;
    

}