#include <iostream>
using namespace std;
int main(){
    char imp;
    cin>>imp;
    switch(imp)
    {
        case 'a':
        {
            cout<<"Enter The Number\n";
            float Num1;
            cin>>Num1;
            if(Num1==10){
                cout<<"Number is 10\n";
            }
            else if(Num1>10){
                cout<<"Number Greater than 10\n"; 
            }
            else{
                cout<<"Number less Than 10\n";
            }
            break;
        }
        case 'b':
        {
            cout<<"Enter Number\n";
            int Num2;
            cin>>Num2;
            if(Num2%2==0 && Num2%3==0){
                cout<<"Divisible by 2 and 3\n";
            }
            else if(Num2%2==0 || Num2%3==0){
                if(Num2%2==0){
                    cout<<"Div 2\n";
                }
                else{
                    cout<<"Div 3\n";
                }
            }
            else{
                cout<<"Number Not div by 2 and 3\n";
            }
            break;
        }
        case 'c':
        {
            cout<<"Enter Numbers\n";
            int e;
            int f;
            cin>>e>>f;
            int Num5=e>f?e-f:e+f;
            cout<<Num5;
            break;
        }
        default:
            cout<<"Unable to process Request\n";
    }
    return 0;
}