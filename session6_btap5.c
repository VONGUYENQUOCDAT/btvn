#include <stdio.h>
#include <stdbool.h>
bool la_nam_nhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int so_ngay_trong_thang(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return la_nam_nhuan(year) ? 29 : 28;
        default:
            return -1; // ko hop le
    }
}

int main() {
    int year, month;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);
    int so_ngay = so_ngay_trong_thang(month, year);
    if (so_ngay == -1) {
        printf("Thang khong hop le.\n");
    } else {
        printf("Thang %d nam %d co %d ngay.\n", month, year, so_ngay);
    }
return 0;
}

