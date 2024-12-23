#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Phan tu %d ton tai tai vi tri: %d\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }
    return 0;
}

