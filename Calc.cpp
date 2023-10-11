#include <iostream>
using namespace std;
int main(){
    char input;
    cout<<"Enter Input :\n";
    cin>>input;
    float Num1,Num2;
    cout<<"Enter Number :\n";
    cin>>Num2>>Num1;
    switch(input)
    {
        case 'a':
            cout<<"Sum: \n"<<Num1+Num2;
            break;
        case 'b':
            cout<<"Subtraction: \n"<<Num1-Num2;
            break;
        case 'c':
            cout<<"multiply: \n"<<Num1*Num2;
            break;
        case 'd':
            cout<<"Division: \n"<<Num1/Num2;
            break;
        default:
        cout<<"Sorry I cant do That\n";
        
    }
    return 0;
}