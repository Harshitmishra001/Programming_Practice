#include <iostream>
using namespace std;
    class Times{
    private:
    int hours;
    int Minutes; 
    int Seconds;
        public:
        Times(){//default constructor
            hours = 0;
            Minutes = 0;
            Seconds = 0;
        }
        Times(int a,int b,int c){
            hours = a;
            Minutes = b;
            Seconds = c;
        }
        void Display(){
            cout<<"Time: ";
            cout<<hours<<":"<<Minutes<<":"<<Seconds<<endl;
        }
        void AddTime(Times x,Times y){
            int extra = 0;
            Seconds = x.Seconds+y.Seconds;
            if(Seconds>60){
                Seconds=Seconds-60;
                extra=extra+1;
            }
                Minutes = x.Minutes + y.Minutes+extra;  
                    extra=0; 
            if(Minutes > 59)
            {           
            Minutes-=60; 
            extra++;      
            }    
            hours = x.hours + y.hours+extra;   
            if(hours >= 24)  {   
            hours-=24;
            cout << "Result"<<hours << ":" << Minutes << ":" << Seconds << endl;      
                    }
        }
};
int main() { 
    Times time1(20, 50, 30); 
    Times time2(10, 30, 43); 
    time1.Display();  
    time2.Display(); 
    cout<<"ADD: "; time1.AddTime(time1, time2); 
return 0; 
}
value =8.9
inc by 0.7
result = 8.9+0.7
        if 9+7 =16
        16-12=4
        exrt=1
        =9.4