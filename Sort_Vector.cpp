#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main() {
    int nexti;
    vector <float>vec;
    vec.push_back(12);
    vec.push_back(21);
    vec.push_back(30);
    vec.push_back(39);
    cout<<"Straight print check"<<endl;
    for(auto it =vec.begin();it!=vec.end();it++){
        cout<<*(it)<<endl;
    }
    vec.erase(vec.end()-1);
    vec.push_back(15);
    vec.push_back(7);
    cout<<"Reverse check"<<endl;
    for(auto it = vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<endl;
    }
    for(auto it=vec.begin();it!=vec.end();it++){
        for(auto nex=vec.begin();nex!=vec.end();nex++){
            if(*(it)<*(nex)){
                nexti=*(it);
                *(it)=*(nex);
                *(nex)=nexti;
            }
        }
    }
    cout<<"Sorted Check"<<endl;
    for(auto it = vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<endl;
    }
    return 0;
}