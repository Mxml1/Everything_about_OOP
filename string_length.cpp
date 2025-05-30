#include<iostream>
using namespace std ;
int length_str(const char*str)// length_str is the function name ..inside the brackets are its arguments .
//question here is why there is a star(*) on the char.. the answer is this is a pointer . its work is to store memory location.if i do not
//use pointer here it will give u an error in advance editors and in old editors it will give u some type of answer from its side 
{
    int length=0;
    for(int i=0;str[i]!='\0';i++){// index starting fro 0 so we initialize also i from 0.. (str[i]!='\0')--> this is the difficult part
        // this condition means if null character come so the condition will become fasle and loop will be terminate ..
        // if the null char does not come the loop will execute and repeat to count ..
        length++;
    }
    return length;
}
main()
{
const char*word=" Muzammil khan ";//e.g my full name has 12 letters so it should need to give me answer=12 if i have not added empty spaces. 
// the empty spaces are also considered in the string.
cout<<"length of string : "<<length_str(word)<<endl;
return 0;
}
//in the output the "length of string : 15" cuz i have added 3 empty spacee one at start one at miidle and one at the end .. 