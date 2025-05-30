#include<iostream>
using namespace std;
class Book{
    private :
     int Book_Id;
     float Price ;
    
     public :
     string Book_Title;

     Book (string Title, int Id , float Pr)
     {
        Book_Title=Title;
        Book_Id=Id;
        Price=Pr;
        cout<<"PARAMERTIZED CONSTRUCTOR IN ACTION "<<endl;

     }
     void Display_Book_Info()
     {
        cout<<" BOOK TITLE IS :"<<Book_Title<<endl;
        cout<<"ID IS :"<<Book_Id<<endl;
        cout<<"PRICE IS :"<<Price<<endl;

     }

     ~Book ()
     {
        cout<<"DESTRUCTOR IN ACTION :"<<endl;
     }
    
};

int main()
{
    Book B1("C++ By Dietels", 4703, 20.0);
    B1.Display_Book_Info();
    return 0;

}