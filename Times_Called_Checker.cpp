#include <iostream>
using namespace std;
int cnt=0;
string caller(){
    cout<<"I have Been Called: "<<cnt<<" Times"<<endl;
    cnt+=1;
}
int main(){
    for(int i=0;i<=10;i++){
        caller();
    }
    return 0;
}