#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,i,res,dam;
        cin>>a>>b;
        int *arr=new int[a];
        for(i=0;i<a;i++){
        cin>>arr[i];
        dam=b;
    }
    for(i=0;i<a;i++){
                dam=dam-arr[i];
    }
                if(dam<0){
                    res=-dam;
                    res=res+1;
                    cout<<res<<endl;
                }
                else if(dam=0){
                    res=1;
                    cout<<res<<endl;
                }
                else{
                    res=0;
                    cout<<res<<endl;
        }
    }
	return 0;
}