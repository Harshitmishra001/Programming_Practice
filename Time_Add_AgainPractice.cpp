#include<iostream>
using namespace std;
class timer{
    public:
    int h, m, s;
    timer(){h=0;m=0;s=0;}
    void setTime(int HH, int MM, int SS){h=HH;m=MM;s=SS;}
    void display(){cout<<"Time Entered: "<<h<<":"<<m<<":"<<s<<endl;}
    void addtime(timer a,timer b){
        int ext=0;
        s=a.s+b.s;
        if (s>60){ s-=60;ext+=1;}
        m=a.m+b.m+ext;
        if (m>=60) {m-=60;ext+=1;}
        h=a.h+b.h+ext;
        cout<<"Added Time:"<<h<<":"<<m<<":"<<s<<endl;
    }
};
int main(){
    timer t1,t2;
    t1.setTime(12,34,59);
    t2.setTime(17,27,49);
    t1.display();
    t2.display();
    cout<<"\nTimer 1 + Timer 2 = ";
    t1.addtime(t1,t2);
    return 0;
}