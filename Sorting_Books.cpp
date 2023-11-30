#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
class books{
    public:
    void DataTaker_bookid(int n){
        map <string, string,string,string> mmap;
    mmap.insert({"Fruit", "Mango"});
    mmap.insert({"Tree", "Oak"});
    mmap.insert({"Vegetable", "Eggplant"});
    for (auto itr = mmap.begin(); itr != mmap.end(); ++itr) {
        cout << itr->first << ": " << itr->second << endl;
    }
    }
    void DataTaker_authorname(int n){
    int z=0;
    string *arr=new string[n];
    cout << "Enter Author Name\n";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr[0],arr[z]);
    }
    void DataTaker_price(int n){
    int *arr=new int[n];
    cout << "Enter Prices\n";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    }
    void DataTaker_pages(int n){
    int *arr=new int[n];
    cout << "Enter number of Pages\n";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    }
    void DataTaker_publish_year(int n){
    int *arr=new int[n];
    cout << "Enter Publishing Year\n";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    }
};
int main(){
    books a;
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    a.DataTaker_bookid(n);
    a.DataTaker_authorname(n);
    a.DataTaker_price(n);
    a.DataTaker_pages(n);
    a.DataTaker_publish_year(n);
    return 0;
}