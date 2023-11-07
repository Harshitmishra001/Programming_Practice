#include <iostream>
using namespace std;
inline double cletofarn(double &celcius){
    return (celcius*9.0/5.0)+32.0;
}
int main (){
    double celcius,farnheit;
    cout<<"Enter Temp In Celcius\n";
    cin>>celcius;
    farnheit=cletofarn(celcius);
    cout<<"Temp:\n"<<farnheit;
}