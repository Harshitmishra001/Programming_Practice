#include <iostream>
using namespace std;
int main(){
    //this is created by myself
    cout<<"Enter number\n";
    int n;
    cin>>n;
    while (true){
        if(n>0){
            cout<<"Value: "<<n<<endl;
            cout<<"Enter number";
            cin>>n;
            continue;
        }
        else{
            break;
        }
    }
    // This is what i learned from video
    cout<<"This is the second do loop running\n";
    cout<<"Enter Number\n";
    int Num1;
    cin>>Num1;
    do{
        cout<<"Number: "<<Num1<<endl;
        cin>>Num1;
    }while(Num1>5);
    return 0;
}