// Que NO 6, Page NO 224
#include<iostream>
using namespace std;
void copy_string(char str1[],char str2[])
{
    int i;
    for (i=0; str2[i]!='\0'; i++)
    {
        str1[i]=str2[i];
    }
    str1[i]='\0';
}
main()
{
    char str1[100], str2[50];
    cout<<"Enter the Second String : ";
    cin.getline(str1,100);
    cout<<"Enter the Second String : ";
    cin.getline(str2,50);

    copy_string(str1,str2);

    cout<<"Copied string : "<<str1<<endl;
    return 0;
}