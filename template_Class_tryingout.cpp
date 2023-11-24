#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
template <typename B> class Calculator{
    public:
    float countDigit(float n){ 
        int tot=0;
        while(n>0)
        {
            tot++;
            n = n/10;
        }
        std::string s;
        std::string t;
        std::stringstream out;
        out << n;
        s = out.str();
        t = s.substr(s.find(".")+1);
        return tot+t.length();
        return tot;
    }
    void significantnum(float num,int power){
        cout<<fixed<<setprecision(power)<<num;
    }
    float CountdigitafterDecimal(float digits){
        std::string s;
        std::string t;
        std::stringstream out;
        out << digits;
        s = out.str();
        t = s.substr(s.find(".")+1);
        return t.length();
    }
};
int main(){
    Calculator<float> Sol1;
        float num1,num2,calculated;
        int power1,power2;
        char choice;
        cout<<"Enter Number 1:\n";
        cin>>num1;
        cout<<"Enter Number 2:\n";
        cin>>num2;
        power1=Sol1.countDigit(num1);
        power2=Sol1.countDigit(num2);
        cout<<power1<<endl;
        cout<<power2<<endl;
        cout<<"Enter Opretion to Perform\n";
        cin>>choice;
        
        switch (choice)
        {
        case '+':
            calculated=num1+num2;
            break;
        case '-':
            calculated=num1-num2;
            break;
        case '*':
            calculated=num1*num2;
            break;
        case '/':
            calculated=num1/num2;
            break;
        default:
            cout<<"Wrong input\n";
            break;
        }
        if(power1>power2){
            Sol1.significantnum(calculated,power2);
        }
        if(power1<power2){
            Sol1.significantnum(calculated,power1);
        }
        else{
            Sol1.significantnum(calculated,power1);
        }
    return 0;
}