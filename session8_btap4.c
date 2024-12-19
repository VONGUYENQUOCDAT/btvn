#include <stdio.h>
int main() {
    int arr[3][4] = {{1, 3, 5, 3},{6, 2, 4, 9},{27, 13, 10, 20}};
    int a = 3; // so hang cua mang
    int b = 4; // so cot cua mang
    int max = arr[0][0];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}

