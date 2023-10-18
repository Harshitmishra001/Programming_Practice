#include <iostream>
using namespace std;
int main(){
    try{
        int nume,dnemo;
        cin>>nume>>dnemo;
        if(nume==0){
            throw(nume);
        }
        else{
            float n=nume/dnemo;
            cout<<n;
        }
    }
    catch(...){
        cout<<"Invalid";
    }
}