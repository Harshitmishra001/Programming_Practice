#include <iostream>
#include <cmath>
using namespace std;
class userdata{
    private:
    char name[50];
    string accno;
    long int depo,withdraw,amount;
    double bal;
    string ans,yesn;
    int minbal=1000;
    public:
    void minbalce(void);
    void getdata(void);
    void trans(void);
    void compoundin(void);
    void withdraws(void);
    void deposit(void);
};
void userdata::minbalce(void){
    if(bal<minbal){
        cout<<"As Balance is Less Then Minimum Required Balanace We are Imposing a Penalty of 200 RS\n";
        bal-=200;
        cout<<"Current Balance : "<<bal<<endl;
    }
}
void userdata::getdata(void){
    cout<<"Enter name of user:\n";
    cin>>name;
    cout<<"Enter account number:\n";
    cin>>accno;
    cout<<"Enter Balance\n";
    cin>>bal;
}
void userdata::trans(void){
    
        cout<<"Hi!\n"<<name<<endl;
        cout<<"Balance:\n"<<bal<<endl;
}
void userdata::deposit(void){
    cout<<"Enter Transaction Amount: \n";
    cin>>amount;
    bal=bal+amount;
    cout<<"Hi!\n"<<name<<endl;
    cout<<"New Balance:\n"<<bal;
}
void userdata::compoundin(void){
    double rate=1.75;
    double time=5;
    double compoundInterest;
    cout<<"The Rate of Taken is:  "<<rate<<"\nAnd Time is: "<<time<<endl;
    compoundInterest = bal * pow(1 + (rate / 100), time) - bal;
    bal=bal+compoundInterest;
    cout<<"New Balance: \n"<<bal<<endl;
    }
void userdata::withdraws(void){
    cout<<"Enter Transaction Amount: \n";
    cin>>amount;
    if(bal<amount){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
        bal=bal-amount;
        cout<<"Hi!\n"<<name<<endl;
        cout<<"New Balance:\n"<<bal<<endl;
        }
}
int main(){
    string typ;
    userdata a;
    string ask;
    string cont = "yes";
    a.getdata();
    do{
        cout<<"Enter Type of account s for saving and c for current\n";
        cin>>typ;
        if(typ=="c"){
            a.minbalce();
            cout<<"enter d for Deposit And o for Account Details  : \n";
            cin>>ask;
            if(ask=="d"){
                a.deposit();
            }
            else if(ask=="o"){
                a.trans();
            }
            else{
                cout<<"Invalid Output"<<endl;
            }
        }
        else if(typ=="s"){
            a.compoundin();
            cout<<"enter yes To withdraw : \n";
            cin>>ask;
            if(ask=="yes"){
                a.withdraws();
            }
        }
        else{
            cout<<"Wrong Input"<<endl;
        }
        cout<<"\nDo u Want to change Your account Type and Do calculations Again : \n";
        cout<<"Enter yes To Continue\n";
        cin>>cont;
    }while (cont=="yes");
    return 0;
}