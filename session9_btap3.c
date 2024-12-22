#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int array[MAX_SIZE];
    int currentLength;
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &currentLength);

    if (currentLength <= 0 || currentLength > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int position;
    printf("Nhap vi tri can xoa (0-based): ");
    scanf("%d", &position);

    if (position < 0 || position >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (int i = position; i < currentLength - 1; i++) {
        array[i] = array[i + 1];
    }
    currentLength--;
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

