#include <iostream>
using namespace std;

int main(){

    cout<<"Your Saving:\n";
    int Saving1;
    cin>>Saving1;

    if(Saving1>=100000) {
        cout<<"You Have Good Saving\n";
        if(Saving1>=150000) {
            cout<<"You Can Try to invest in Stocks\n";
        }
        else {
            cout<<"You Can't Invest In Stocks,Try to save More\n";
        }
    }
    else if(Saving1>25000 && Saving1<100000) {
        cout<<"You have Decent SAVINGS\n";
    }
    else {
        cout<<"You have to work harder\n";
    }

    return 0;
}