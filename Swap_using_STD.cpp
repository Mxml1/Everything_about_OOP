#include"iostream"

int main()
{
    int a,b,temp=0;
    std::cout<<"ENTER VALUE OF A :"<<std::endl;
    std::cin>>a;
    std::cout<<"ENTER VALUE OF B :"<<std::endl;
    std::cin>>b;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"SWAPPING ...:"<<std::endl;
    std::cout<<"A BECOME :"<<a<<std::endl;
    std::cout<<"B BECOME :"<<b<<std::endl;
    temp=temp-temp;
    std::cout<<"TEMP BECOME :"<<temp<<std::endl;

return 0;
}