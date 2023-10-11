#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter The size of array";
    cin>>n;
    int *arr=new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}