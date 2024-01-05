#include <iostream>
using namespace std;
class subcomplex{
    public:
    int real,imag;
    subcomplex(int x=0, int y=0):real(x),imag(y){};
    subcomplex operator -(subcomplex const &obj){
        subcomplex res;
        res.real=real-obj.real;
        res.imag=imag-obj.imag;
        return res;
    }
    friend istream &operator >>(istream &in,subcomplex &obj);
    friend ostream &operator <<(ostream &out,subcomplex &obj);
    void display(){cout<<"value: "<<real<<"+"<<imag<<"i"<<endl;}
};
istream &operator >>(istream &in,subcomplex &obj){
    in>>obj.real;
    in>>obj.imag;
    return in;
}
ostream &operator <<(ostream &out,subcomplex &obj){
    out<<obj.real<<"+"<<obj.imag<<"i"<<endl;
    return out;
}
int main(){
    subcomplex n1(4,6);
    subcomplex n2(3,5);
    cout<<"Complex 1 is: "<<n1<<endl;
    cout<<"Complex 2 is: "<<n2<<endl;
    subcomplex n3=n1-n2;
    n3.display();
    return 0;
}