#include <iostream>
using namespace std;
int main(){
    int Pocketmoney=3000;
    for(int date=1;date<=31;date++){
        if(date%2==0){
            cout<<"Date: "<<date<<endl;
            cout<<"You can Go out Today an you used $300\n"<<"Balance Left : "<<Pocketmoney<<endl;
            Pocketmoney=Pocketmoney-300;
            if(Pocketmoney<=0){
                date=date+1;
                cout<<"You can't go out now and date: "<<date;
                break;
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }
    return 0;
}