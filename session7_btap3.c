#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int check = 0;
    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("arr[%d] = %d\n", i, arr[i]);
            check = 1;
        }
    }
    if (!check) {
        printf("Mang khong chua so chan.\n");
    }
    return 0;
}

