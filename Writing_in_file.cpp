#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream har("My_First_File.txt", ios::trunc);//app for owerwiriting in the file 
    har << "Hello!" << endl;
    har << "FirstTimeHere" << endl;
    har << 18 << " ThatsYourage" << endl;
    har.close();
    cout << "reading file" << endl;
    ifstream sim("My_First_File.txt");
    string name;
    int num;
    string grands,takes;
    if (sim.is_open()) {
        sim >> name >> grands >> num>>takes;
        sim.close();
        cout << name << endl;
        cout << grands<< endl;
        cout << num << endl;
        cout << takes << endl;
    } else {
        cout << "Error opening the file." << endl;
    }
    return 0;
}