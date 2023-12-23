#include <iostream>
#include <fstream>
using namespace std;
class Student {
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs, const Student &s);
};
ofstream & operator<<(ofstream &ofs, const Student &s) {
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
int main() {
    ofstream ofs("Test.txt");
    if (ofs.is_open()) {
        Student s1;
        s1.name = "John";
        s1.roll = 10;
        s1.branch = "CS";
        ofs << s1;
        ofs.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
