#include <iostream>
using namespace std;
int main() {
    int m,n,i,j,x;
    cout<<"Enter rows and Coloumns";
    cin>>n>>m;
    int *arr=new int[n*m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i*m+j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr[i*m+j]<<" ";
        }
        cout<<endl;
    }
    bool flag=false;
    cout<<"Enter Term To find: \n";
    cin>>x;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i*m+j]==x){
                cout<<"row: "<<i+1<<" coloumn: "<<j+1<<endl;
                flag=true;
            }
        }
    }
    if(flag==true){
        cout<<"Element Found\n";
    }
    else{
        cout<<"Element Not Found\n";
 
    }
    return 0;
}