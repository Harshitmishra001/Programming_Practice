#include <iostream>
using namespace std;
int main(){
    int k;
    char arr[100]="apple";
    int i=0;
    while(arr[i] !='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n-1;i++){
        for(int j=0;j=i+1;j++){
            if(arr[i]>arr[j]){
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    cout<<"\nYour Sorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}