#include <stdio.h>

void taoMaTran(int rows, int cols, int matrix[rows][cols]) {
    printf("Nhap cac phan tu cua ma tran (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void inMaTran(int rows, int cols, int matrix[rows][cols]) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    taoMaTran(rows, cols, matrix);
    inMaTran(rows, cols, matrix);

    return 0;
}

