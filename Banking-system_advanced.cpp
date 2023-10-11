#include <iostream>
using namespace std;
class userdata{
    char name[50];
    int accno,depo,withdraw,amount;
    double bal;
    string ans,typ,yesn;
    public:
    void getdata(void);
    void trans(void);
    void savings(void);
};
void userdata::getdata(void){
    cout<<"Enter name of user:\n";
    cin>>name;
    cout<<"Enter account number:\n";
    cin>>accno;
    cout<<"Enter Type of account s for saving and c for current\n";
    cin>>typ;
    cout<<"Enter Balance\n";
    cin>>bal;
}
void userdata::trans(void){
    cout<<"Enter w for withdrawl or d for deposit or a for account details: \n";
    cin>>ans;
    cout<<"Enter Transaction Amount: \n";
    cin>>amount;
    if(ans=="w"){
        if(bal<amount){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
        bal=bal-amount;
        cout<<"Hi!\n"<<name<<endl;
        cout<<"New Balance:\n"<<bal;
        }
    }
    else if(ans=="d"){
        bal=bal+amount;
        cout<<"Hi!\n"<<name<<endl;
        cout<<"New Balance:\n"<<bal;
    }
    else if(ans=="a"){
        cout<<"Hi!\n"<<name<<endl;
        cout<<"Balance:\n"<<bal<<endl;
        cout<<"Type Of Account:\n"<<typ<<endl; 
    }
    else{
        cout<<"Invalid Operation\n";
    }
}
void userdata::savings(void){
    double rate;
    double time;
    double compoundInterest;
    
    compoundInterest = bal * pow(1 + (rate / 100), time) - bal;
    bal=bal+compoundInterest;
    cout<<"New Balance: \n"<<bal;
    cout<<"Would You Like To Withdraw? w for withdraw\n";
    cin>>yesn;
    if(yesn=="w"){
        bal=bal-amount;
        cout<<"Hi!\n"<<name<<endl;
        cout<<"New Balance:\n"<<bal;
    }
}
int main(){
    userdata a;
    a.getdata();
    if(typ)
    a.trans();
    return 0;
}