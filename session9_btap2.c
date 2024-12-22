#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int array[MAX_SIZE];
    int currentLength;

    // Nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &currentLength);

    if (currentLength <= 0 || currentLength > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    // Nh?p các ph?n t? c?a m?ng
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    int position, newValue;
    printf("Nhap vi tri can sua (0-based): ");
    scanf("%d", &position);
    if (position < 0 || position >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    array[position] = newValue;
    printf("Mang sau khi sua: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

