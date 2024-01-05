#include <iostream>
using namespace std;
class overlord{
    public:
    int m,cm;
    overlord (int x=0, int y=0)=m(x),cm(y){};
    overlord operator +(overlord const &obj){
        overlord res;
        res.m=m+obj.m;
        res.cm=cm+obj.m;
        return res;
    }
    friend ostream &operator <<(ostream &out,overlord &obd);
    friend istream &operator >>(istream &in,overlord &obd);
    void display(){ cout<<"distance: "<<m<<"m "<<cm<<" cm";}
};
ostream &operator <<(ostream &out,overlord &obd){
    
}
istream &operator >>(istream &in,overlord &obd){

}
