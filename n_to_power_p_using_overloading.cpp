#include <iostream>
#include<math.h>
using namespace std;
template <typename h,typename u>
h power(u po,h num){
    return pow(num,po);
}
int main(){
    string numericType;
    double po;
    cout << "Enter the numeric type (int, float, double, etc.): ";
    cin >> numericType;
    if (numericType == "int") {
        int num;
        cout << "Enter the base number: ";
        cin >> num;
        cout << "Enter The Power: ";
        cin >> po;
        cout << "\nThe Result is: " << power(po, num) << endl;
    } else if (numericType == "float") {
        float num;
        cout << "Enter the base number: ";
        cin >> num;
        cout << "Enter The Power: ";
        cin >> po;
        cout << "\nThe Result is: " << power(po, num) << endl;
    } else if (numericType == "double") {
        double num;
        cout << "Enter the base number: ";
        cin >> num;
        cout << "Enter The Power: ";
        cin >> po;
        cout << "\nThe Result is: " << power(po, num) << endl;
    } else {
        cout << "Unsupported numeric type: " << numericType << endl;
        return 1; 
    }
    return 0;
}
