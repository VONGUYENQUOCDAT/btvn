#include <stdio.h>
int main() {
    float a, b, c;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh cua tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }
    return 0;
}

