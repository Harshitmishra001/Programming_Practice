#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string str="";
    cout<<"Enter String: "<<endl;
    getline(cin, str);
    vector<char> arr(str.length()+1); 
    int j=0;
    for(int i=str.length()-1;i>=0;i--){
        arr[j]=str[i];
        j++;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}