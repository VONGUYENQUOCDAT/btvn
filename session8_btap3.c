#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao so nguyen (kich thuoc cua ma tran vuong): ");
    scanf("%d", &n);
    int array[n][n];
    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = value;
            value++;
        }
    }
    printf("Ma tran vuong %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", array[i][j]); 
        }
        printf("\n"); 
    }
    return 0;
}

