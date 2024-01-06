#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream har;
    har.open("abcde.txt");
    string s;
    if(har.is_open()){
        while(har.eof()==0){
            getline(har,s);
            cout<<s<<endl;
        }
    }
    else{
        cout<<"Filed To Open File";
    }
    return 0;
}