#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\nDo dai cua mang: %d\n", length);
    return 0;
}

