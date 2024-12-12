#include <stdio.h>
int main() {
    int a;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("So vua nhap la so duong.\n");
    } else if (a < 0) {
        printf("So vua nhap la so am.\n");
    } else {
        printf("So vua nhap la so 0.\n");
    }
    return 0;
}

