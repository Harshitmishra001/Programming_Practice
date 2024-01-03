#include <iostream>
using namespace std;
class addition{
    int a,b,Result;
    public:
    addition(){b=0;}
    void setData(int x,int y){a=x;b=y;}
    int add(){return a+b;}
};
int main(){
    addition u;
    u.setData(7,3);
    cout<<u.add()<<endl;
    return 0;
}