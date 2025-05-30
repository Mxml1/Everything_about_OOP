#include<iostream>
using namespace std;
class Area{
   private:
    float Pi;
    int radius;
    float area;
    public:
    Area()
{
    Pi=3.14;
}    
     void Input_for_r(int r){
        radius = r ;
        cout<<"Enter the value of r :"<<endl;
        cin>>radius;
     }

     void AreaOfCircle()
    {
        area= Pi*radius*radius;
        cout <<"Area of circle is :"<<area<<endl;
    }

};
int main()
{
    Area A1(3.14);
   A1.Input_for_r(5);
    A1.AreaOfCircle();
    return 0;
}
