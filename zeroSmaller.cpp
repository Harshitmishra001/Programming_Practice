#include <iostream>
using namespace std;
int zerosmaller(int &a,int &b){
    if (a<b){return a=0;}
    else{return b=0;}
}
int main(){
    int a,b;
    cout<<"Enter Num1: \n";
    cin>>a;
    cout<<"Enter Num2: \n";
    cin>>b;
    zerosmaller(a,b);
    cout<<"Num1: "<<a<<"\n Num2: "<<b<<endl;
    return 0;
}