#include <stdio.h>

#define MAX_SIZE 100 // Kích thu?c t?i da c?a m?ng

// Hàm hi?n th? các ph?n t? trong m?ng
void displayArray(int array[], int size) {
    if (size == 0) {
        printf("M?ng r?ng\n");
        return;
    }
    printf("Các ph?n t? trong m?ng là: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Hàm chính
int main(void) {
    int arrayInt[MAX_SIZE]; // M?ng ch?a ph?n t?
    int size = 0;           // Kích thu?c th?c t? c?a m?ng

    while (1) {
        // Hi?n th? menu
        printf("\n==============MENU================\n");
        printf("1. Nh?p ph?n t? cho m?ng\n");
        printf("2. Hi?n th? m?ng\n");
        printf("3. Thêm m?i ph?n t? vào m?ng\n");
        printf("4. S?a giá tr?\n");
        printf("5. Xóa ph?n t?\n");
        printf("6. Thoát\n");
        printf("Hãy nh?p l?a ch?n: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // Nh?p ph?n t? cho m?ng
                int n;
                printf("Hãy nh?p s? lu?ng ph?n t?: ");
                scanf("%d", &n);
                if (n <= 0 || n > MAX_SIZE) {
                    printf("S? lu?ng ph?n t? không h?p l?! (1 - %d)\n", MAX_SIZE);
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nh?p Array[%d]: ", i);
                    scanf("%d", &arrayInt[i]);
                }
                size = n;
                printf("Ðã nh?p m?ng thành công.\n");
                break;
            }
            case 2: { // Hi?n th? m?ng
                displayArray(arrayInt, size);
                break;
            }
            case 3: { // Thêm m?i ph?n t?
                if (size == MAX_SIZE) {
                    printf("M?ng dã d?y, không th? thêm ph?n t? m?i.\n");
                    break;
                }
                int addIndex, valueInput;
                printf("Hãy nh?p giá tr? c?n thêm: ");
                scanf("%d", &valueInput);
                printf("Hãy nh?p v? trí c?n thêm (0 d?n %d): ", size);
                scanf("%d", &addIndex);

                if (addIndex < 0 || addIndex > size) {
                    printf("V? trí không h?p l?!\n");
                    break;
                }

                for (int i = size - 1; i >= addIndex; --i) {
                    arrayInt[i + 1] = arrayInt[i];
                }
                arrayInt[addIndex] = valueInput;
                size++;
                printf("Ðã thêm ph?n t? thành công.\n");
                break;
            }
            case 4: { // S?a giá tr?
                int editIndex, newValue;
                printf("Hãy nh?p v? trí c?n s?a (0 d?n %d): ", size - 1);
                scanf("%d", &editIndex);

                if (editIndex < 0 || editIndex >= size) {
                    printf("V? trí không h?p l?!\n");
                    break;
                }

                printf("Hãy nh?p giá tr? m?i [giá tr? cu = %d]: ", arrayInt[editIndex]);
                scanf("%d", &newValue);
                arrayInt[editIndex] = newValue;
                printf("Ðã c?p nh?t giá tr? thành công.\n");
                break;
            }
            case 5: { // Xóa ph?n t?
                int deleteIndex;
                printf("Hãy nh?p v? trí c?n xóa (0 d?n %d): ", size - 1);
                scanf("%d", &deleteIndex);

                if (deleteIndex < 0 || deleteIndex >= size) {
                    printf("V? trí không h?p l?!\n");
                    break;
                }

                for (int i = deleteIndex; i < size - 1; ++i) {
                    arrayInt[i] = arrayInt[i + 1];
                }
                size--;
                printf("Ðã xóa ph?n t? thành công.\n");
                break;
            }
            case 6: { // Thoát
                printf("Thoát chuong trình.\n");
                return 0;
            }
            default: {
                printf("L?a ch?n không h?p l?. Vui lòng nh?p t? 1 - 6.\n");
                break;
            }
        }
    }

    return 0;
}

