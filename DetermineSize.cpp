#include"iostream"

struct Structure{

   std:: string name ;
    int age ;
    long int CellNo;
    float CGPA;
};
int main()
{
    
   std::cout<<sizeof(int)<<" Bytes :"<<std::endl;//Int
   std::cout<<sizeof(double)<<" Bytes :"<<std::endl;//Double
   std::cout<<sizeof(float)<<" Bytes :"<<std::endl;//Float
   std::cout<<sizeof(char)<<" Bytes :"<<std::endl;//Character
   std::cout<<sizeof(bool)<<" Bytes :"<<std::endl;//Boolean
   int A[10];
   std::cout<<sizeof(A)<<" Bytes :"<<std::endl;//Array

   std::cout<<<<sizeof(Structure)<<" Bytes :"<<std::endl;//Struct
   std::cout<<sizeof(std::string)<<" Bytes :"<<std::endl;//string
}