#include<iostream>
using namespace std;
class Shape{
    public:
   virtual void Area ()
    {
        cout<<"Area of Shape is Unknown :"<<endl;
    }

    // ~Shape()
    // {
    //     cout<<""
    // }

};

class Circle : public Shape
{
    private :
    float radius ;
    public :
     Circle(float r)
    {
        radius = r;
    }

    void Area ()
    {
        float Ar;
        Ar = 3.1415*radius*radius;
        cout<<"AREA OF CIRCLE IS :"<<Ar<<endl;
    }

};

class Square : public Shape
{
    private :
    float side ;
    public:
    Square (float s)
    {
        side = s ;
    }
    void Area()
    {
        
        float A = side * side ;
        cout<<"AREA OF SQUARE IS :"<<A<<endl;
    }

};

int main()
{
    Shape * S1;
    Circle r(4);

    Square s(5);

    S1= &r;
    S1->Area();
    cout<<"_-_-_-_-_-_-_-"<<endl;

    S1= &s;

    S1->Area();

    return 0;


}