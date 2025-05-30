 //Ques No 4 .. Page no 224 .. take input as float in every place as per question . i have just took it as an int 
#include<iostream>
using namespace std;
int Find_largest(int a,int b,int c , int d ){// find_largest is the name of function And inside the () are its arguments of the function
    int largest=a;// initially i assume that a is the largest among the 4 values 
    if(b>largest)// compare b and largest
   largest = b;
    if(c>largest)// compare c and largest  
    largest = c;
    if(d>largest)// compare d and largest ;
    largest = d; 
    // the tricky point here is that we had initialize largest as a but line by line the comparison is not remain as a and the rest 
    // of varibles like b, c, d 
    return largest;
}
main()
{
    int a, b , c, d ;
    cout<<" Enter the value of a : ";
    cin>>a;
    cout<<" Enter the value of b : ";
    cin>>b;
    cout<<" Enter the value of c : ";
    cin>>c;
    cout<<" Enter the value of d : ";
    cin>>d;
    cout<<"  largest number is : "<<Find_largest(a,b,c,d)<<endl;;
    cout<<" !!Execution Successfull!! ";
    return 0;
}