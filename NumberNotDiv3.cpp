#include <iostream>
using namespace std;
int main(){
    //This Is Not Divisible by 3 code
    for(int n=0;n<=100;n++){
        if(n%3==0){
            continue;
        }
        else{
            cout<<n<<endl;
        }
    }
    // This is Prime Number Code
    cout<<"Enter 2 digit NO.";
    int Num1;
    cin>>Num1;
    int n;
    for(n=2;n<Num1;n++){
        if(Num1%n==0){
            cout<<Num1<<" is a Non Prime No. divisible by "<<n<<endl;
        }
        else{
            continue;
        }
        break;
    }
    if(n==Num1){
        cout<<"Prime Number"<<endl;
    }
    return 0;
}