#include <iostream>
using namespace std;
int main(){
    string name;
    int n,e;
    float avg;
    cout<<"Enter Name:"<<endl;
    cin>>name;
    cout<<"Hi\n"<<name<<endl;
    cout<<"Enter 2 numbers\n";
    cin>>n>>e;
    avg=(n+e)/2;
    cout<<avg;
    return 0;
}
