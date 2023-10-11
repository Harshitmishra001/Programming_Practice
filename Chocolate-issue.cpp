#include <iostream>
using namespace std;
int main(){
    int money,wrappers,chocolate;
    cout<<"Cost of Chocolate $2 and 3 wrappers can get u 1 chocolate"<<endl;
    cout<<"Enter Money you have\n";
    cin>>money;
    int cost=2;
    chocolate=money/cost;
    cout<<"Refund Of remaing money: "<<money%cost<<endl;
    cout<<"You can get choclate with money: "<<chocolate<<endl;
    wrappers=chocolate;
    int extrachoco=wrappers/3;
    extrachoco=wrappers;
    cout<<"You can get extra chocolate with wrappers: "<<extrachoco<<endl;
    chocolate=chocolate+extrachoco;
    cout<<"You can get Total choclate : "<<chocolate<<endl;
}