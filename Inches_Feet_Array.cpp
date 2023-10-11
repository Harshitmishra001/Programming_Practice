#include <iostream>
using namespace std;
class distances{
    private:
    float feet;
    float inches;
    public:
    void input(){
        cout<<"Enter Feets:\n";
        cin>>feet;
        cout<<"Enter Inches:\n";
        cin>>inches;
    }
    void display(){
        cout<<"Inches : "<<inches<<"Feet : "<<feet<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter Size:\n";
    cin>>n;
    distances *arr = new distances[n];
    for(int i=0;i<n;i++){
        cout<<"For object"<<i+1<<endl;
        arr[i].input();
    }
    for(int i=0;i<n;i++){
        arr[i].display();
    }
    delete arr;
    return 0; 
}