#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
    cout<<"enter values";
    cin>>arr[i];
    }
    for(int i;i<n;i++)
    {
    cout<<"output is:";
    cout<<arr[i]<<endl;
    }
}