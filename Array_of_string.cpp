#include<iostream>
#include<string>
using namespace std;

   void input_countries_names( string Countries[],int size ){

    int i;
    for (i=0 ; i<size; i++)
    {
        cout<<"ENTER NAME OF THE "<<i+1<<" COUNTRY :"<<endl;
        cin>>Countries[i];
    }
}
void display_countries_names(string Countries[], int size){
    int i;
    for (i=0 ; i<size ; i++)
    {
        cout<<"THE ENTERED NAMES OF THE COUNTRIES ARE :"<<Countries[i]<<endl;
    }
}

main(){
    int size =10;
    string Countries[size];
    input_countries_names(Countries,size);
    display_countries_names(Countries,size);
    cout<<"EXECUTION COMPLETED :";
    return 0;
}