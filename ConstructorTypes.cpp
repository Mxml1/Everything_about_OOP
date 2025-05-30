#include"iostream"
 
class Student {
private :
std::string Name;
int Age ;
std::string Dept;

public :
// Default Constructor :
Student (){
    Name = "Mxml khan";
    Age = 19 ;
    Dept = "DCST";
}
//Parameterized Constructor :
Student(std::string name , int age , std::string dept)
{
    this->Name=name;
    this->Age=age;
    this->Dept=dept;
}
 Student (Student &S3){
    std::cout<<"I am Copy Constructor :";
    this->Name=S3.Name;
    this->Age=S3.Age;
    this->Dept=S3.Dept;

}
void DisplayInfo()
{
    std::cout<<"I am Display Function :"<<std::endl;
    std::cout<<Name<<std::endl;
    std::cout<<Age<<std::endl;
    std::cout<<Dept<<std::endl;
}


};
int main()
{
    Student S1;
    Student S2("US",18,"DCST");
    // Student S3
    S1.DisplayInfo();
    std::cout<<"---------"<<std::endl;
    S2.DisplayInfo();
    std::cout<<"----------"<<std::endl;
    Student S3(S2);
    S3.DisplayInfo();
}