#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int n,nxt;
    cout<<"Enter The Number for factorial\n";
    cin>>n;
    long int z=1;
    for(int i=1;i<=n;++i){
        z*=i;
    }
    cout<<z;
    return 0;
}