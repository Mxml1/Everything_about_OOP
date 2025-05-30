Que No 12 . Page No 224
#include<iostream>
using namespace std;
int Reverse_No(int num){// Reverse_No is the function name and "num" is its argument
int reverse=0;// initialize with zero because it will give u garbage value if not initizlize with zero
for(;num!=0;num=num/10){//we know or we do not know about the initial value so we just put ";"to complete syntax .condition tells that the 
// entered value should not be zero and loops runs till the num become zero and after that num for example "4567" is divided by 10 to 
     //remove last digit which is 7 and stored it in the result variable .. num = num/10 the right num becomes new number after each cycle
        //this case . 
        int result=num%10;//is the last digit which are removed from the number 
        reverse=reverse*10+result;// in 1st iteration the reverse is zero and result is 7 so --> 0*10+7 =7
        //in 2nd iteration the reverse is 7 and result is 6 so --> (7*10) +6 = 76
        //in 3rd iteration the reverse  is 76 and result is 5 so --> (76*10) +5 = 765
        // in 4th and last iteration the reverse is the 765 and result is 4 so --> (765 *10 ) +4 = 7654 --> this is the final answer
}
return reverse;
}
main()
{
    int num ;
    cout<<"Enter any Number : "<<endl;
    cin>>num;
    cout<<"Reverse of the Entered Number is :"<<Reverse_No(num)<<endl;
    return 0;
}