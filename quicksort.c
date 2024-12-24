#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Decreasing Sort
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low;j<high; j++){
        if(arr[j]<pivot){ //change < for increasing sort
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quicksort(int arr[],int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {50,30,10,90,80,20,40}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n); 

    quicksort(arr, 0, n - 1);  

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}