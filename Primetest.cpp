#include <iostream>
using namespace std;
int main(){
    cout<<"Enter NUmber";
    int Num1;
    cin>>Num1;
    for (int i=2;i<Num1;i++){
        if(Num1%i==0){
            cout<<"Not Prime";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
    }
    return 0;
}