#include <stdio.h>
int main(void){
    int arr[5] = {4,2,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                k=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=k;
            }
        }
        counter++;
    }
    for(int i = 0 ; i< n ; i++){
        printf("%i",arr[i]);
    }
}