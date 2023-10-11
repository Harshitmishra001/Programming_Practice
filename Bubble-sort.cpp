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
    cout<<"\nYour Unsorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int counter=1;
    while(counter<n){
        for(i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                k=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=k;
            }
        }
        counter++;
    }
    cout<<"\nYour Sorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}