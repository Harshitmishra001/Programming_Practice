#include <iostream>
using namespace std;
int main(){
    int n;
    int ca1=0;
    int ca2=0;
    int ca3=0;
    int ca4=0;
    int ca5=0;
    int spoil=0;
    cout<<"Enter Number of Participants: \n";
    cin>>n;
    int *arr =new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            ca1+=1;
        }
        else if(arr[i]==2){
            ca2+=1;
        }
        else if(arr[i]==3){
            ca3+=1;
        }
        else if(arr[i]==4){
            ca4+=1;
        }
        else if(arr[i]==5){
            ca5+=1;
        }
        else{
            cout<<"This is A spoid Vote:\n";
            spoil+=1;
        }
    }
    cout<<"Vote for Ca1:"<<ca1<<endl;
    cout<<"Vote for Ca2:"<<ca2<<endl;
    cout<<"Vote for Ca3:"<<ca3<<endl;
    cout<<"Vote for Ca4:"<<ca4<<endl;
    cout<<"Vote for Ca5:"<<ca5<<endl;
    cout<<"Spoiled Votes:"<<spoil<<endl;
    return 0;
}