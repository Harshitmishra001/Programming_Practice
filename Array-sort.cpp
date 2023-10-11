#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"How many numbers do you want to enter";
    cin>>n;
    int *arr =new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<"your Array unsorted is:\n";
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
    }
    cout<<"\nyour Array sorted is:\n";
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}