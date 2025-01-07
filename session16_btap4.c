#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Cac phan tu trong mang la:\n");
    printArray(arr, size);

    return 0;
}

