#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,nxterm;
    cout<<"Enter The number:\n";
    cin>>a>>b;
    for(int i=1;i<=20;i++){
        nxterm=a+b;
        cout<<a<<endl;
        a=b;
        b=nxterm;
    }
    return 0;
}