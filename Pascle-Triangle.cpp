#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter Number of rows and Columns for pascle triangle\n";
    cin>>rows>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"*\n";
        }
    }
    return 0;
}