#include <stdio.h>
int main() {
    int n = 4; // matrix size
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int sum = 0; 
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
        sum += array[i][i];
    }
    printf("\nTong cac phan tu la: %d\n", sum);
    return 0;
}

