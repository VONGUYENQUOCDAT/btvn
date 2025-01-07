#include <stdio.h>

void update(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue;
    } else {
        printf("V? trí c?p nh?t không h?p l?.\n");
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau la:\n");
    printArray(arr, size);

    int newValue = 6;
    int position = 1;
    update(arr, size, newValue, position);

    printf("\nMang sau khi cap nhat la:\n");
    printArray(arr, size);

    return 0;
}

