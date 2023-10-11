#include <iostream>
using namespace std;
int main(){
    int n,i,k;
    cout<<"Enter size of array\n";
    cin>>n;
    int *arr=new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nYour Unsorted array: "
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j=i+1;j++){
            if(arr[i]>arr[j]){
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    cout<<"\nYour Sorted array: "
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}