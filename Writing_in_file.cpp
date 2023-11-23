#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream har("My_First_File",ios::app); //app for adding with replacing and trunc for overwriting
    har<<"Hello Harshit!"<<endl;
    har<<"First Time Here"<<endl;
    har<<187<<" Thats Your age"<<endl;
    har.close();
}