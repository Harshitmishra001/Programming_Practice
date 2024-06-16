#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    vector <pair<float,float>> vec;
    vec.push_back({1,3});
    vec.push_back({2,5});
    vector<int> black(4,3);
    vector<int>white(black);
    black.push_back(4);
    //Reversing a String
    cout<<"Reverse String:\n";
    string name = "Harshit";
    for(auto sim =name.rbegin(); sim !=name.rend();sim++){
        cout<<*(sim);
    }
    cout<<endl;
    //Reversing a Vector
    cout<<"Reverse Vector:\n";
    for(auto sim =black.rbegin(); sim !=black.rend();sim++){
        cout<<*(sim);
    }
    cout<<endl;
    //Printing Vector 
    vector<int>::iterator har=black.begin();    
    cout<<"Straight Vector:\n";
    for(int i=0;i<black.size();i++){
        cout<<*(har)<<endl;
        har++;
    }
    //Erasing variable form Vector
    black.erase(black.begin()+1,black.begin()+3);
    cout<<"Straight Vector:\n";
    har = black.begin();
    for(int i=0;i<black.size();i++){
        cout<<*(har)<<endl;
        har++;
    }
}   