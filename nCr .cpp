#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,r,e,nCr;
    cout<<"Enter The Number for n and r in nCr\n";
    cin>>n>>r;
    e=n-r;
    int z=1,q=1,w=1;
    for(int i=1;i<=n;++i){
        z*=i;
    }
    for(int v=1;v<=r;++v){
        q*=v;
    }
    for(int b=1;b<=e;++b){
        w*=b;
    }
    nCr=z/(w*q);
    cout<<nCr;
    return 0;
}