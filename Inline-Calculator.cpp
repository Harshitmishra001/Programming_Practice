#include <iostream>
using namespace std;
class person{
    float a,b,sum,div,mul,sub;
    public:
    void get();
    void add();
    void sub();
    void div();
    void mul();

};
inline void person::get(void){
    cout<<"Enter Values: \n";
    cin>>a>>b;
}
inline void person::add(void){
    cout<<"Addition :\n"<<a+b;
}
inline void person::sub(void){
    cout<<"Subtraction :\n"<<a-b;
}
inline void person::mul(void){
    cout<<"Multiplication :\n"<<a*b;
}
inline void person::div(void){
    cout<<"Division :\n"<<a/b;
}
int main(){
    person s;
    s.get();
    s.add();
    s.mul();
    s.div();
    s.sub();
}