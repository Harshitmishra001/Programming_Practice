#include <iostream>
using namespace std;
inline double volumeofcy(float radius , float height){ return 3.14*radius*radius*height;}
int main(){
    double radius,height;
    cin>>radius>>height;
    double volume=volumeofcy(radius,height);
    cout<<"Volume of cyliner : "<<volume;
    return 0;
}