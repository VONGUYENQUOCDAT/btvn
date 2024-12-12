#include <stdio.h>
int main() {
    int a;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("So vua nhap la so chan.\n");
    } else {
        printf("So vua nhap la so le.\n");
    }
    return 0;
}

