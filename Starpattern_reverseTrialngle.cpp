#include <iostream>
using namespace std;
void printpyramid(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int k=n-i;k<n;k++){
            cout<<"#";
        }
        for(int l=n+1;l<n+3;l++){
            cout<<" ";
        }
        for(int b=n+3;b<n+3+i;b++){
            cout<<"#";
        }
        cout<<endl;
    }
}
int main(){
    int n=0;
    cout<<"Enter the Height of Box\n";
    cin>>n;
    n++;
    printpyramid(n);
    return 0;
}