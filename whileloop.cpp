#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number";
    int n;
    cin>>n;
    while(n>0){
        cout<<"Value: "<<n<<endl;
        cout<<"Enter number";
        cin>>n;
    }
    return 0;
}