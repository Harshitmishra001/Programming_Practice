#include<iostream>
using namespace std;
class tollBooth{
    int cars;
    double amount;
    public:
    tollBooth(){cars=0;amount=0;}
    void PayingCar(){cars+=1;amount+=1;}
    void nopayCar(){cars+=1;}
    void display(){cout<<"Cars Passed: "<<cars<<" Toll Collected: "<<amount<<endl;}
};
int main(){
    tollBooth tb;
    char a;
    bool cont=true;
    while (cont==true)
    {
        cout<<"Enter Operation To perform: ";
        cin>>a;
        switch (a)
        {
        case '1':
            tb.PayingCar();
            break;
        case '2':
            tb.nopayCar();
            break;
        case '$':
            tb.display();
            cont=false;
            break;
        default:
            cont=false;
            break;
        }
    }
    return 0;
}