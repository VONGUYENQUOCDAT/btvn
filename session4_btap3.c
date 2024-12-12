#include <stdio.h>
int main() {
    int a;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5.\n",a);
    } else if (a % 3 == 0) {
        printf("So %d chi chia het cho 3.\n",a);
    } else if (a % 5 == 0) {
        printf("So %d chi chia het cho 5.\n",a);
    } else {
        printf("So %d khong chia het cho 3 và 5.\n",a);
    }
    return 0;
}

