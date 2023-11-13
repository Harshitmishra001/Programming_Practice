#include <iostream>
using namespace std;
class BasicCar
{
public:
virtual void start(){cout<<"BasicCar started"<<endl;}
};
class AdvanceCar: public BasicCar
{
public:
virtual void start(){cout<<"AdvanceCar Started"<<endl;}
};
class thirdcar:public BasicCar{
public:
void start(){cout<<"thirdCar Started"<<endl;}
};
int main()
{
BasicCar *p=new thirdcar();
p->start();
}