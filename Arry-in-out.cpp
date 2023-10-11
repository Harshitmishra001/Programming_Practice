#include <iostream>
using namespace std;
int main(){
    int n,i,k;
    cout<<"Enter size of array :";
    cin>>n;
    int *arr=new int(n);
    cout<<"Enter Values:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Variable: \n";
    cin>>k;
    for(i=0;i<n;i++){
        if(k==arr[i]){
            cout<<"Value Found At: \n"<<i;
        }
    }
    return 0;
}