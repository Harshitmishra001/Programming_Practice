#include <iostream>
using namespace std;
class study{
        public:
        void printer(){
            cout<<"I am A funtion With No arguments\n";
        }
        void printer(int x){
            cout<<"I am a Function With 1 Argument\n"<<x<<endl;
        }
        void printer(int x,int y){
            cout<<"I am a Function With 2 arguments\n"<<x<<y<<endl;
        }
        void printer(double x){
            cout<<"I am a Function With Float Argument\n"<<x<<endl;
        }
    };
int main(){
    study obj1;
    obj1.printer();
    obj1.printer(7);
    obj1.printer(8.9);
    obj1.printer(5,6);
    return 0;
}