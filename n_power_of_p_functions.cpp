#include <iostream>
#include<math.h>
using namespace std;
double power(double po,int num){
    return pow(num,po);
}
int main(){
    double po;
    int num;
    cout<<"Enter the base number: \n";
    cin>>num;
    cout<<"Enter The Power: \n";
    cin>>po;
    cout<<"\nThe Result is : "<<power(po,num)<<endl;
    return 0 ;
}