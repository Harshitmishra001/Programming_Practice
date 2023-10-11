#include <iostream>
#include <cmath>

class CompoundInterest {
private:
    double principal;
    double rate;
    double time;
    double compoundInterest;
public:
    CompoundInterest(double p, double r, double t) {
        principal = p;
        rate = r;
        time = t;
        calculateCompoundInterest();
    }
    void calculateCompoundInterest() {
        compoundInterest = principal * pow(1 + (rate / 100), time) - principal;
    }
    void displayCompoundInterest() {
        std::cout << "Principal Amount: $" << principal << std::endl;
        std::cout << "Rate of Interest: " << rate << "%" << std::endl;
        std::cout << "Time (in years): " << time << std::endl;
        std::cout << "Compound Interest: $" << compoundInterest << std::endl;
    }
};
int main() {
    double principal, rate, time;
    std::cout << "Enter Principal Amount: $";
    std::cin >> principal;
    std::cout << "Enter Rate of Interest (per annum): ";
    std::cin >> rate;
    std::cout << "Enter Time (in years): ";
    std::cin >> time;
    CompoundInterest compoundInterestObj(principal, rate, time);
    compoundInterestObj.displayCompoundInterest();
    return 0;
}
