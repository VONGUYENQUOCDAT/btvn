#include <stdio.h>
int main() {
    int arr[] = {6, 16, 26, 36, 46};
    int size = sizeof(arr) / sizeof(arr[0]);
    int a; // Phan tu can tim
    int found = 0;
    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &a);
    for (int i = 0; i < size; i++) {
        if (arr[i] == a) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }
   if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    return 0;
}

