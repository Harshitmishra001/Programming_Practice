#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter size of array";
    cin>>n;
    int *arr = new int(n);
    for(i=0; i<n; i++)
    {
        cout<<"enter values";
        cin>>arr[i];
    }
    cout << "You entered: ";
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
    cout<<endl;
    return 0;
}