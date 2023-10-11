#include <iostream>
using namespace std;
int main(){
    int n,i,j,sum;
    cout<<"Enter size of Array\n";
    cin>>n;
    int *arr=new int(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
    sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    cout<<"Sum of subarrays: \n"<<sum;
    return 0;
}