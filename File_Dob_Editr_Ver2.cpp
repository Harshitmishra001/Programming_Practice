#include <iostream>
#include <fstream>
#include <String>
using namespace std;
int main() {
    string filename = "abc.txt";
    ifstream file(filename);
    if(file.good()) {
        cout << "File already exists" << endl;
        return 1;
    }
    file.close();
    ofstream outfile(filename);
    if(!outfile.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    string name, dob, school;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter date of birth (dd-mm-yyyy): ";
    getline(cin, dob);
    cout << "Enter school name: ";
    getline(cin, school);
    for (int i = 0; i < dob.length(); i++) {
                if (dob[i] == '-') {
                    dob[i] = '/';
                }
            }
    outfile << name << "\n" << dob << "\n" << school << endl;
    outfile.close();
    ifstream file2(filename);
    if(!file2.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    string line;
    while(getline(file2, line)) {
        cout << line << endl;
    }
    file2.close();
    return 0;
}