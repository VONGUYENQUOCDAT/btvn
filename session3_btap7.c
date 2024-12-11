#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);
    if (number < 1000 || number > 9999) {
        printf("So ban nhap khong phai so nguyen co 4 chu so.\n");
    } else {
        sum += number % 10;
        number /= 10;
        sum += number % 10;
        number /= 10;
        sum += number % 10;
        number /= 10;
        sum += number;
        printf("Tong cac chu so la: %d\n", sum);
    }
return 0;
}

