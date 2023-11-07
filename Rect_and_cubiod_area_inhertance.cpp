#include <iostream>
using namespace std;
class rectangle{
    float length,breadth;
    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    float takelength(float);
    float takebreadth(float);
    float setlength(float h){
        length=h;
    }
    float setbreadth(float b){
        breadth=b;
    }
    float area(){
        return length*breadth;
    };

};
class cuboid:public rectangle{
    
};