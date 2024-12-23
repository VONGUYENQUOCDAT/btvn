#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
	
    int arr[] = {3, 1, 5, 7, 15, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Mang sau khi sap xep tang dan:\n");
    printArray(arr, n);

    return 0;
}

