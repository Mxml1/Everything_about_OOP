#include<iostream>
using namespace std;
long int hms_to_secs(int hours, int mins, int secs)
{
   int result = (hours * 3600 ) + (mins * 60 ) + secs;
   secs = result ;
   return secs ;

    
}
main(){
    int hours ,  mins , secs;
    cout<<" Enter hours :"<<endl;
    cin>>hours;
    cout<<" Enter mins :"<<endl;
    cin>>mins;
    cout<<" Enter secs :"<<endl;
    cin>>secs;

    cout<<" Total time in seconds are :"<<hms_to_secs(hours,mins, secs);
    return 0;

}