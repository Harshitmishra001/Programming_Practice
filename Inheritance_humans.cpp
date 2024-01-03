#include <iostream>
using namespace std;
class human{
    public:
    void hand(){
        cout<<"We are hands";
    }
    void feets(){
        cout<<"We are legs";
    }
};
class male:public human{
    public:
    void excersise(){
        hand();
        cout<<"Men use us to Excersise like Running and Jumping";
    }
    void kicking(){
        feets();
        cout<<"They are used for kicking";
    }
};