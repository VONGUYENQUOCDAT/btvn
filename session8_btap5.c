#include <stdio.h>
int main() {
    int rows = 4, cols = 5;
    int array[4][5] = { {1, 2, 3, 4, 5},
						{6, 7, 8, 9, 10},
						{11, 12, 13, 14, 15},
						{16, 17, 18, 19, 20} };
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += array[i][j];
            }
        }
    }
    printf("Tong cac phan tu la: %d\n", sum);
    return 0;
}
