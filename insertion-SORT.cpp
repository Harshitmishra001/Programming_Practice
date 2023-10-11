#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"How many numbers do you want to enter";
    cin>>n;
    int *arr =new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nUnsoreted: \n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=1;i<n;i++){
        int cur=arr[i];
        int j=i-1;
        while(arr[j]>cur && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
    cout<<"\nsoreted: \n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}