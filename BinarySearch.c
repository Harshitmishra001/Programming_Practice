#include <stdio.h>

int BinarySearch(int arr[], int key, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return BinarySearch(arr, key, mid + 1, high);
    } else {
        return BinarySearch(arr, key, low, mid - 1);
    }
}
int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int key = 90;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int result = BinarySearch(arr, key, 0, high);
    if (result != -1) {
        printf("Value is at: %i", result);
    } else {
        printf("Value not found");
    }
}