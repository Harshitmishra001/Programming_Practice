#include<iostream> 
using namespace std; 
class Time { 
private:     
int hours;     int minutes;     int seconds; 
public:     
Time()
{                    
hours = 0;   
minutes = 0;    
seconds = 0;
}
Time (int h, int m, int s)
{       
hours = h;         
minutes = m;      
seconds = s;    
} 
void display()
{ 
cout<<"TIME:  ";   
cout << hours << ":" << minutes << ":" << seconds << endl; 
}
void add(Time x, Time y) 
{
int tmp=0;    
seconds = x.seconds + y.seconds;    
if(seconds > 59)
{          
    seconds = seconds-60;          
    tmp++;       
} 
        minutes = x.minutes + y.minutes+tmp;  
        tmp=0; 
if(minutes > 59)
{           
minutes-=60; 
tmp++;      
}    
hours = x.hours + y.hours+tmp;   
if(hours >= 24)     
hours-=24;
cout << hours << ":" << minutes << ":" << seconds << endl;      
}
};
int main() { Time time1(20, 50, 30); 
Time time2(10, 30, 43); 
time1.display(); 
time2.display(); 
cout<<"\nAfter ADD: "; time1.add(time1, time2); 
return 0; 
}
