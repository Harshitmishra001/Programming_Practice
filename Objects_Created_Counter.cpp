#include<iostream>
using namespace std;
class counter{
    int serialnumber;
    static int cnt;
    public:
    string name;
    counter(string objName):serialnumber(0),name(objName){}
    int counting(){cnt=cnt+1;serialnumber=cnt;return cnt;}
    void display(){cout<<"Value of Counter: "<<serialnumber<<"of object :"<<name<<endl;}
};
int counter::cnt = 0;
int main(){
    cout<<"Enter the number of objects you want to create\n";
    counter obj1("obj1"),obj2("obj2"),obj3("obj3"),obj4("obj4");
    obj1.counting();
    obj2.counting();
    obj4.counting();
    obj3.counting();
    obj1.display();
    obj4.display();
    obj3.display();
    return 0;
}