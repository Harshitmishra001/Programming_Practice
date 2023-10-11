#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int rows,columns,n,k=1;
    cout<<"Enter Number of rows and Columns and number for pascle triangle\n";
    cin>>rows>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            for(int v=1;v<=n;++v){
                k*=v;
                cout<<k;
            }
        }
    }
    return 0;
}