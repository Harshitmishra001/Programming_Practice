#include <iostream>
using namespace std;
int main(){
    cout<<"Number";
    int Num1;
    cin>>Num1;
    int sum=0;
    for(int counter=1;counter<=Num1;counter++){
        sum=sum+counter;
    }

    cout<<"Sum:\n";
    cout<<sum<<endl;

    return 0;

}