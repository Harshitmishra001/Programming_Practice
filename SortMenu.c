//Harshit Mishra 23BAI10473
#include <stdio.h>

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high, int isIncreasing) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if ((isIncreasing && arr[j] < pivot) || (!isIncreasing && arr[j] > pivot)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quick Sort function
void quicksort(int arr[], int low, int high, int isIncreasing) {
    if (low < high) {
        int pi = partition(arr, low, high, isIncreasing);
        quicksort(arr, low, pi - 1, isIncreasing);
        quicksort(arr, pi + 1, high, isIncreasing);
    }
}

// Bubble Sort function
void bubble(int arr[], int n, int isIncreasing) {
    for (int counter = 1; counter < n; counter++) {
        for (int i = 0; i < n - counter; i++) {
            if ((isIncreasing && arr[i] > arr[i + 1]) || (!isIncreasing && arr[i] < arr[i + 1])) {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

// Insertion Sort function
void insertion(int arr[], int n, int isIncreasing) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && ((isIncreasing && arr[j] > key) || (!isIncreasing && arr[j] < key))) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort function
void selection(int arr[], int n, int isIncreasing) {
    for (int i = 0; i < n - 1; i++) {
        int extremeIdx = i;
        for (int j = i + 1; j < n; j++) {
            if ((isIncreasing && arr[j] < arr[extremeIdx]) || (!isIncreasing && arr[j] > arr[extremeIdx])) {
                extremeIdx = j;
            }
        }
        swap(&arr[extremeIdx], &arr[i]);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int n, choice, order;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Quick Sort\n");
        printf("2. Bubble Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Selection Sort\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        printf("Choose order:\n");
        printf("1. Increasing Order\n");
        printf("2. Decreasing Order\n");
        printf("Enter your choice: ");
        scanf("%d", &order);

        int isIncreasing = (order == 1);

        // Reset the array for each sort
        int tempArr[n];
        for (int i = 0; i < n; i++) {
            tempArr[i] = arr[i];
        }

        printf("Original array: ");
        printArray(tempArr, n);

        if (choice == 1) {
            quicksort(tempArr, 0, n - 1, isIncreasing);
            printf("Sorted array using Quick Sort: ");
        } else if (choice == 2) {
            bubble(tempArr, n, isIncreasing);
            printf("Sorted array using Bubble Sort: ");
        } else if (choice == 3) {
            insertion(tempArr, n, isIncreasing);
            printf("Sorted array using Insertion Sort: ");
        } else if (choice == 4) {
            selection(tempArr, n, isIncreasing);
            printf("Sorted array using Selection Sort: ");
        } else {
            printf("Invalid choice!\n");
            continue;
        }

        printArray(tempArr, n);
    }

    return 0;
}
/*@Harshitmishra001 ➜ /workspaces/Programming_Practice (main) $ ./SortMenu
Enter the number of elements in the array: 4
Enter the elements of the array: 90
34
23
87

Menu:
1. Quick Sort
2. Bubble Sort
3. Insertion Sort
4. Selection Sort
5. Exit
Enter your choice: 1
Choose order:
1. Increasing Order
2. Decreasing Order
Enter your choice: 1
Original array: 90 34 23 87 
Sorted array using Quick Sort: 23 34 87 90 

Menu:
1. Quick Sort
2. Bubble Sort
3. Insertion Sort
4. Selection Sort
5. Exit
Enter your choice: 2
Choose order:
1. Increasing Order
2. Decreasing Order
Enter your choice: 1
Original array: 90 34 23 87 
Sorted array using Bubble Sort: 23 34 87 90 

Menu:
1. Quick Sort
2. Bubble Sort
3. Insertion Sort
4. Selection Sort
5. Exit
Enter your choice: 3
Choose order:
1. Increasing Order
2. Decreasing Order
Enter your choice: 1
Original array: 90 34 23 87 
Sorted array using Insertion Sort: 23 34 87 90 

Menu:
1. Quick Sort
2. Bubble Sort
3. Insertion Sort
4. Selection Sort
5. Exit
Enter your choice: 4
Choose order:
1. Increasing Order
2. Decreasing Order
Enter your choice: 1
Original array: 90 34 23 87 
Sorted array using Selection Sort: 23 34 87 90 */