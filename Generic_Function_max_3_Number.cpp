#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
template <typename T>
T find_largest(T num1, T num2, T num3) {
    return max({num1, num2, num3});
}
int main() {
    int number1 = 10;
    int number2 = 25;
    int number3 = 15;
    int largest_number = find_largest(number1, number2, number3);
    cout << "The largest number is: " << largest_number << endl;
    double floatNumber1 = 10.5;
    double floatNumber2 = 25.3;
    double floatNumber3 = 15.7;
    double largest_float_number = find_largest(floatNumber1, floatNumber2, floatNumber3);
    cout << "The largest float number is: " << largest_float_number << endl;
    return 0;
}