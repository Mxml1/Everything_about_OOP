//Que No 7 page no 224 
#include<iostream>
using namespace std;
void combine_strings(char str1[], char str2[])
{
    int i, j;
    for(i=0; str1[i]!='\0';i++);
    
        for(j=0; str2[j]!='\0'; j++){
            str1[i+j]=str2[j];
        }
    str1[i+j]='\0';
}
main()
{
    char str1 [50], str2[50];
    cout<<"Enter the First String : ";
    cin.getline(str1,100);
    cout<<"Enter the Second String : ";
    cin.getline(str2,100);
    combine_strings(str1,str2);

    cout<<"The combine string : "<<str1<<endl;
    return 0;
}