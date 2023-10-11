#include <iostream>
using namespace std;

class calc{
    float num1,num2,result;
    public:
    void add(void);
    void sub(void);
    void mul(void);
    void div(void);
};
inline void calc :: add(void){
    cout<<"Enter Numbers";
    cin>>num1>>num2;
    result=num1+num2;
    cout<<"Result :"<<result<<endl;
}
inline void calc :: sub(void){
    cout<<"Enter Numbers";
    cin>>num1>>num2;
    result=num1-num2;
    cout<<"Result :"<<result<<endl;
}
inline void calc :: mul(void){
    cout<<"Enter Numbers";
    cin>>num1>>num2;
    result=num1*num2;
    cout<<"Result :"<<result<<endl;
}
inline void calc :: div(void){
    cout<<"Enter Numbers";
    cin>>num1>>num2;
    result=num1/num2;
    cout<<"Result :"<<result<<endl;
}
int main(){
    calc a;
    a.add();
    a.sub();
    a.mul();
    a.div();
    return 0;
}