#include <iostream>
using namespace std;
class runner{
    private:
    int cm,m,km,ext;
    public:
    runner(){
        cm=0;
        m=0;
        km=0;
        ext=0;
    }
    void converter(void);
    void getdata(void);
    void printer(void);
};
void runner::getdata(void){
    cout<<"Enter The Distance In Cm : \n";
    cin>>cm;
}
void runner::converter(void){
    if(cm>=100){
        m=cm/100;
        ext=cm-m*100;
        cm=ext;
        if(m>=1000){
            km=m/1000;
            ext=m-km*1000;
            m=ext;
        }
    }
}
void runner::printer(void){
    cout<<"Ran Distance : "<<km<<" km "<<m<<" m "<<cm<<" cm "<<endl;
}
int main(){
    runner a;
    a.getdata();
    a.converter();
    a.printer();
    return 0 ;
}