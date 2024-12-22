#include <stdio.h>
int main() {
    int array[100];
    int currentLength, addIndex, value_to_add;
    printf("Nhap so phan tu(toi da 100): ");
    scanf("%d", &currentLength);

    if (currentLength < 0 || currentLength > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mang hien tai: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value_to_add);
    printf("Nhap vi tri muon them (0-based): ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex > 100) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    if (addIndex >= currentLength) {
        array[addIndex] = value_to_add;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            array[i] = array[i - 1];
        }
        array[addIndex] = value_to_add;
        currentLength++;
    }
    printf("Mang sau khi them phan tu: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

