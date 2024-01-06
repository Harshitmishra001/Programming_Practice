#include <iostream>
using namespace std;
class Distance{
    public:
    int feet;
    Distance(double x=0.0):feet(static_cast<int>(x)){};
    friend Distance operator*(double scalar, const Distance &obj);
    friend Distance operator*(const Distance &obj1, const Distance &obj);
    void display(){
        cout<<"Distance Muliplied is: "<<feet<<" Feet "<<endl;
    }
};
Distance operator*(double scalar, const Distance &obj){
        Distance result;
        result.feet = static_cast<int>(scalar * obj.feet);
        return result;
    }
Distance operator*(const Distance &obj1, const Distance &obj){
        Distance result;
        result.feet = obj1.feet* obj.feet;
        return result;
    }
int main(){
    Distance obj1(8.5);
    Distance obj2(5.8);
    Distance res3=7.5*obj1;
    Distance res4=obj1*obj2;
    res3.display();
    res4.display();
}
