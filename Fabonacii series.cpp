#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Fabonnici Series until 300";
    cout<<"Enter The number:";
    cin>>a>>b;
    for(int i=1;a<=100;i++){
        a=a+b;
        cout<<a;
        a=b;
    }
    return 0;
}