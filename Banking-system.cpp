#include <iostream>
using namespace std;
class userdata{
    char name[50];
    int accno,bal,depo,withdraw,amount;
    string ans,typ;
    public:
    void getdata(void);
    void trans(void);
};
void userdata::getdata(void){
    cout<<"Enter name of user:\n";
    cin>>name;
    cout<<"Enter account number:\n";
    cin>>accno;
    cout<<"Enter Type of account\n";
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
int main(){
    userdata a;
    a.getdata();
    a.trans();
    return 0;
}