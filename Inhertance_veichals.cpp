// Create a class hierarchy with a vehicle base class. Derived classes will be trucks, cars,
// buses, and motorcycles. All vehicles have instance data representing the vehicle
// identification number (type long) and the gross vehicle weight. In addition, trucks have
// a load capacity (in pounds, type float), cars have a body style (a string, such as “sedan”,
// “sports car”, or “station wagon”), and busses have a passenger capacity (type int).
// Motorcycles have no additional instance data.
#include <iostream>
#include <string>
using namespace std;
class vehicle{
    protected:
    long id_number;
    float gvw;
    public:
    void detailvec(){
        cout << "Vehicle ID Number :"<<endl;
        cin>>id_number;
        cout << "Gross Vehical weight :"<<endl;
        cin>>gvw;
    }
    void detailsprint(){
        cout << "Vehicle ID Number :"<<id_number<<endl;
        cout << "Gross Vehical weight :"<<gvw<<endl;
    }
};
class truck:protected vehicle{
    private:
    float load_capacity;
    public:
    void detailstrk() {
        detailvec();
        cout << "Load Capacity :"<< endl;
        cin >>load_capacity;
    }
    void printtrk() {
        detailsprint();
        cout << "Load Capacity :"<<load_capacity<<endl;
    }
};
class car:protected vehicle{
    private:
    string body_style;
    public:
    void detailscar() {
        detailvec();
        cout << "Body Style :"<< endl;
        getline(cin,body_style);
        }
    void printscar() {
        detailsprint();
        cout << "Body Style :"<<body_style<<endl;
    }
};
class bus:protected vehicle{
    private:
    int max_passengers;
    public:
    void detailbus() {
        detailvec();
        cout << "Maximum number of Passengers :"<< endl;
        cin>>max_passengers;
    }
    void printbus() {
        detailsprint();
        cout << "Body Style :"<<max_passengers<<endl;
    }
};
class motorcycles:protected vehicle{
    public:
    void detailsmotor(){
        detailvec();
    }
    void printmotor(){
        detailsprint();
    }
};
int main (){
    truck t;
    car c;
    bus b;
    motorcycles m;
    char choice;
    cout<<"t=truck"<<endl;
    cout<<"c=car"<<endl;
    cout<<"b=bus"<<endl;
    cout<<"m=motorcycle"<<endl;
    cout<<"Enter choice:"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 't':
        t.detailstrk();
        t.printtrk();
        break;
    case 'c':
        c.detailscar();
        c.printscar();
    case 'b':
        b.detailbus();
        b.printbus();
    case 'm':
        m.detailsmotor();
        m.printmotor();
    default:
        break;
    }
    return 0;
}