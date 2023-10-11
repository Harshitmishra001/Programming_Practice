#include <iostream>
void add(double &result, double num1, double num2);
void subtract(double &result, double num1, double num2);
void multiply(double &result, double num1, double num2);
bool divide(double &result, double num1, double num2);
void add(double &result, double num1, double num2) {
    result = num1 + num2;
}
void subtract(double &result, double num1, double num2) {
    result = num1 - num2;
}
void multiply(double &result, double num1, double num2) {
    result = num1 * num2;
}
bool divide(double &result, double num1, double num2) {
    if (num2 == 0) {
        return false;
    } else {
        result = num1 / num2;
        return true;
    }
}
int main() {
    double num1, num2;
    char operation;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    double result;
    switch (operation) {
        case '+':
            add(result, num1, num2);
            break;
        case '-':
            subtract(result, num1, num2);
            break;
        case '*':
            multiply(result, num1, num2);
            break;
        case '/':
            if (divide(result, num1, num2)) {
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            return 1;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 1;
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}

