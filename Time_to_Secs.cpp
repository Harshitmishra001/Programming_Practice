#include <iostream>
using namespace std;
int hms_to_secs(int h,int m,int s){
    return h*60*60+m*60+s;
}
int main(){
    int h,m,s;
    long int finalsec;
    cout<<"Enter hours: ";
    cin>>h;
    cout<<"\nEnter minutes: ";
    cin>>m;
    cout<<"\nEnter seconds: ";
    cin>>s;
    finalsec=hms_to_secs(h,m,s);
    cout<<"\nTime given = "<<h<<":"<<m<<":"<<s<<endl;
    cout<<"\nTime in Seconds = "<<finalsec<<" sec";
    return 0;
}