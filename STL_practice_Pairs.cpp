#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<float, float> arr[]={{1.9,3.9},{2.7,4.6},{3.2,5.1}};
    int sec=rand() % 2 ;
    int fis=rand()%1+1;
    cout<<"The Value Given is in "<<sec+1<<" nd Pair and palace is "<<fis<<endl;
    switch (fis)
    {
    case 1:
        cout<<arr[sec].first<<endl;
        break;
    case 2:
        cout<<arr[sec].second<<endl;
        break;
    default:
        break;
    }
    return 0;
}