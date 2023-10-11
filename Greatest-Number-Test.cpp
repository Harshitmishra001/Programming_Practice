#include <iostream>
using namespace std;

int main(){
    cout<<"Enter 3 numbers\n";
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3) {
        cout<<"First number Is Greatest :\n";
        cout<<num1;
    }
    else if(num2>num1 && num2>num3) {
        cout<<"Second number Is Greatest :\n";
        cout<<num2;
    }
    else{
        cout<<"Third number Is Greatest :\n";
        cout<<num3;
    }
    return 0;
}