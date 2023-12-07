#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream har("Book_File.txt", ios::trunc);//app for owerwiriting in the file 
    har << "AB101" << endl;
    har << "JhonDoe" << endl;
    har << 350 <<endl;
    har<< 720<<endl;
    har<<2005<<endl;
    har << "AB102" << endl;
    har << "ArakeshVerma" << endl;
    har << 150 << endl;
    har<<310 <<endl;
    har<<2009<<endl;
    har.close();
    ifstream sim("Book_File.txt");
    string name1,name2,bookid1,bookid2;
    int price1,price2,page1,page2,pub1,pub2;
    if (sim.is_open()) {
        sim >>bookid1>>name1>>price1>>page1>>pub1;
        sim >>bookid2>>name2>>price2>>page2>>pub2;
        sim.close();
        cout<<"Current Files Details: "<<endl;
        cout<<"book_id_1: "<<bookid1<<"\nName1: "<<name1<<"\nPrice1: "<<price1<<"\nPage1: "<<page1<<"\nPublish_Date_1: "<<pub1<<endl;
        cout<<"book_id_2: "<<bookid2<<"\nName2: "<<name2<<"\nPrice2: "<<price2<<"\nPage2: "<<page2<<"\nPublish_Date_2: "<<pub2<<endl;
        int result = name1.compare(name2);
        ofstream har("Book_File.txt", ios::trunc);
        if (result < 0) {
            har << bookid1 << endl;
            har << name1 << endl;
            har << price1 << page1 << pub1<<endl;
            har << bookid2 << endl;
            har << name2<< endl;
            har << price2 << page2 << pub2<<endl;
            cout<<"New Files Details: "<<endl;
            cout<<"book_id_1: "<<bookid1<<"\nName1: "<<name1<<"\nPrice1: "<<price1<<"\nPage1: "<<page1<<"\nPublish_Date_1: "<<pub1<<endl;
            cout<<"book_id_2: "<<bookid2<<"\nName2: "<<name2<<"\nPrice2: "<<price2<<"\nPage2: "<<page2<<"\nPublish_Date_2: "<<pub2<<endl;
            har.close();
        } else {
            har << bookid2 << endl;
            har << name2<< endl;
            har << price2 << page2 << pub2<<endl;
            har << bookid1 << endl;
            har << name1 << endl;
            har << price1 << page1 << pub1<<endl;
            cout<<"New Files Details: "<<endl;
            cout<<"book_id_1: "<<bookid2<<"\nName1: "<<name2<<"\nPrice1: "<<price2<<"\nPage1: "<<page2<<"\nPublish_Date_1: "<<pub2<<endl;
            cout<<"book_id_2: "<<bookid1<<"\nName2: "<<name1<<"\nPrice2: "<<price1<<"\nPage2: "<<page1<<"\nPublish_Date_2: "<<pub1<<endl;
            har.close();
        }
    } else {
        cout << "Error opening the file." << endl;
    }
    return 0;
}