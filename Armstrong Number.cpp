#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int originaln=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;

    }

    if(sum==originaln){
        cout<<sum<<endl;
    }
    return 0;
}