#include <iostream>
using namespace std;
class Distance {
public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}
    friend ostream& operator<<(ostream& out, const Distance& dist) {
        out << dist.feet << " feet " << dist.inches << " inches";
        return out;
    }
    friend istream& operator>>(istream& in, Distance& dist) {
        in >> dist.feet >> dist.inches;
        return in;
    }
private:
    int feet;
    int inches;
};
int main() {
    Distance dist1(3, 4);
    cout << "Distance: " << dist1 << endl; 
    cout << "Enter the distance (feet and inches): ";
    Distance dist2;
    cin >> dist2;
    cout << "Entered distance: " << dist2 << endl;
    return 0;
}