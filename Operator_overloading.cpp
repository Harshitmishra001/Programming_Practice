#include <iostream>
using namespace std;
class complexnum{
    int real,img;
    public:
    complexnum(){real=0;img=0;}
    complexnum(int r, int i){real=r;img=i;}
    complexnum operator +(complexnum const &obj){
        complexnum res;
        res.img=img+obj.img;
        res.real=real+obj.real;
        return res;
    }
    void display(){cout<<"The Complex Number is : "<<real<<"+"<<img<<"i"<<endl;}
};
int main(){
    complexnum n1(12,7),n2(13,8);
    complexnum n3=n1+n2;
    n3.display();
    return 0;
}
