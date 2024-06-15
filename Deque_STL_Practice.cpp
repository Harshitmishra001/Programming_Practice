#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);
    for(auto it=dq.begin();it!=dq.end();++it){
        cout<<*it<<" ";
    }
    dq.pop_back();
    
}