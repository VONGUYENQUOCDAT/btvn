#include <stdio.h>
int main() {
    int a, b, c;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &c);
    if ((c >= a && c <= b) || (c >= b && c <= a)) {
        printf("So %d nam trong khoang giua %d va %d.\n", c, a, b);
    } else {
        printf("So %d khong nam trong khoang giua %d va %d.\n", c, a, b);
    }
    return 0;
}

