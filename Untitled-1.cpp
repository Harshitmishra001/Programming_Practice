#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    if(n==123){
        cout<<"Welcome Sir Harshit!";
        cout<<"Let Us Play a Game,,,Guess The Number!!";
        int num=23;
        int les;
        while(num=!les){
            cout<<"Enter Your Guess";
            cin>>les;
            if(les<num){
                cout<<"Guess Is lower Than Number";
            }
            else{
                cout<<"Guess is Higher than number";
            }

        }
    }
    else{
        cout<<"Wrong Id! Try Again";
    }
    return 0;
}
