// Que no 5 < Page NO 224
#include<iostream>
using namespace std ;
int len_str(const char* str)//len_str--> funtion name .... char data type haing fixed length and 
// the star(*) is the pointer which points towatrd the str ;
{
    int length=0;
    for (int i=0; str[i]!='\0';i++){ //...'\0'--> null character ;
        length++;
    }
    return length ;
}
main(){
    char str[10];
    cout<<"Enter the string : "<<endl;
    cin.getline(str,10);
    cout<<"Length of the string is : "<<len_str(str)<<endl;
    return 0;
}