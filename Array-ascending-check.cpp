#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
    cin>>n;
    int *arr=new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	}
    return 0;
}
