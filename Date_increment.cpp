#include <iostream>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    bool operator<(const Date& other) const {
        return year < other.year || (year == other.year && (month < other.month || (month == other.month && day < other.day)));
    }
    bool operator<=(const Date& other) const {
        return *this < other || *this == other;
    }
    bool operator>(const Date& other) const {
        return !(*this <= other);
    }
    bool operator>=(const Date& other) const {
        return !(*this < other);
    }
    bool operator==(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }
    bool operator!=(const Date& other) const {
        return !(*this == other);
    }
    Date& operator++() {
        if (day < 31) {
            ++day;
        } 
        else {
            day = 1;
            if (month < 12) {
                ++month;
            } 
            else {
                month = 1;
                ++year;
            }
        }
        return *this;
    }
    Date operator+(int days) const {
        Date result = *this;
        for (int i = 0; i < days; ++i) {
            ++result;
        }
        return result;
    }
    operator int() const {
        return (month - 1) * 30 + day;
    }
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};
int main() {
    Date dt1(1, 1, 2023);
    Date dt2(15, 2, 2023);
    if (dt1 < dt2) {
        cout << "dt1 is earlier than dt2." <<endl;
    }
    ++dt1;
    cout << "After incrementing by one day: ";
    dt1.display();
    Date dt3 = dt2 + 10;
    cout << "After adding 10 days to dt2: ";
    dt3.display();
    int days = dt1;
    cout << "Number of days elapsed in the current year: " << days <<endl;
    return 0;
}