#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string name, DOB, school;
int main() {
    ifstream infile("abc.txt");
    ofstream onfile("abc.txt");
    if (infile.is_open()) {
        cout << "File Already open" << endl;
        infile.close();
    }
    else {
        cout << "Enter Name: " << endl;
        cin >> name;
        onfile << name << endl;
        cout << "Enter DOB: " << endl;
        cin >> DOB;
        onfile << DOB << endl;
        cout << "Enter School: " << endl;
        cin >> school;
        onfile << school << endl;
    }
    if (infile.is_open()) {
        getline(infile, name);
        while (getline(infile, DOB)) {
            for (int i = 0; i < DOB.length(); i++) {
                if (DOB[i] == '-') {
                    DOB[i] = '/';
                }
            }
            getline(infile, school);
            onfile << name << endl;
            onfile << DOB << endl;
            onfile << school << endl;
            cout << "Done Editing!" << endl;
        }
    }
    infile.close();
    onfile.close();
    return 0;
}