#include<iostream>
using namespace std;

int main() {
    cout<<"Enter Your age\n";
    int age;
    cin>>age;
    cout<<"your age is:\n";
    cout<<age;

    if(age>18) {
        cout<<" is the age when you can vote\n";
    }
    else {
        cout<<" is the age when You can't vote\n";
    }

    

    return 0;
}