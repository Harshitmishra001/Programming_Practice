#include <iostream>
using namespace std;
int main(){
    int n,i,k;
    cout<<"Enter size of Array: \n";
    cin>>n;
    int *arr=new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    k=0;
    for(i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]>arr[j]){
                if(arr[i]>k){
                k=arr[i];
                }
            }
            else{
                if(arr[j]>k){
                k=arr[j];
                }
            }
        }
    }
    cout<<"Max Value: \n"<<k;
    return 0;
}