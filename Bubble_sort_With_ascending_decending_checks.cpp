#include <iostream>
using namespace std;
const int ASCENDING_ORDER=1;
const int DESCENDING_ORDER=2;
char preferredSortingOrder(int arr[],int size) {
    int ascCount = 0;
    int descCount = 0;
    for (int i=1;i<size;++i) {
        if (arr[i-1]<=arr[i]) {
            ascCount++;
        }
        if (arr[i-1]>=arr[i]) {
            descCount++;
        }
    }
    if (ascCount>descCount) {
        return ASCENDING_ORDER;
    } 
    else {
        return DESCENDING_ORDER;
    }
}
class Sorting {
public:
    void AscSort(int arr[],int n) {
        int k;
        for (int i=0;i<n-1;i++) {
            for (int j=0;j<n-i-1;j++) {
                if (arr[j]>arr[j+1]) {
                    k=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=k;
                }
            }
        }
    }

    void DescSort(int arr[], int n) {
        int k;
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-1;j++) {
                if(arr[j]<arr[j+1]) {
                    k=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=k;
                }
            }
        }
    }
};

int main() {
    int n;
    Sorting a;
    cout<<"Enter size of array\n";
    cin>>n;
    int *arr=new int[n];
    cout << "Enter elements of the array\n";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    char result = preferredSortingOrder(arr, n);
    switch(result){
    case ASCENDING_ORDER:
        a.AscSort(arr, n);
        break;
    case DESCENDING_ORDER:
        a.DescSort(arr, n);
        break;
    default:
        break;
    }
    cout << "\nYour Sorted array: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
