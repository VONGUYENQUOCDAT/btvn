#include <stdio.h>
int main() {
    int n, a = 0, b = 1, sum;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    printf("Day Fibonacci co %d so dau tien la: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
        } else if (i == 2) {
            printf("%d ", b);
        } else {
            sum = a + b;
            printf("%d ", sum);
            a = b;
            b = sum;
        }
    }
    printf("\n");
    return 0;
}

