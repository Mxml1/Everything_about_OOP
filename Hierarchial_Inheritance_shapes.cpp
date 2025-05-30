#include"iostream"
using namespace std;

class Shape {
    public :
    void ShapeFUN(){
    cout<<" MY NAME IS SHAPE AND I AM THE SUPER CLASS :";
    }
};

class OneDimensional : public Shape{
    public:
    void OneDFun(){
    cout<<"MY NAME IS 1D AND I AM CLASS BELOW SUPER :";
    }
};
class TwoDimensional : public Shape{
    public:
    void TwoDFUN(){
    cout<<"MY NAME IS 2D AND I AM CLASS BELOW SUPER :";
    }
};

class Square : public OneDimensional{
    public:
    void SquareFun(){
    cout<<"MY NAME IS SQUARE AND I AM THE SON OF 1D :";
    }

};
class Triangle : public OneDimensional{


};
class Circle : public OneDimensional{


};

class Cube : public TwoDimensional{
public:
void CubeFUN()
{
    cout<<" I AM CUBE AND I AM THE SON OF 2D :";
}

};
class Sphere : public TwoDimensional{


};
class Tetrahedral : public TwoDimensional{


};


int main()
{
    Square S1;
    S1.OneDFun();
    S1.SquareFun();
    return 0;
    
}