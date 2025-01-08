#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVienArray[50];
    int numberOfStudents = 5;
    for (int i = 0; i < numberOfStudents; i++) {
        sinhVienArray[i].id = i + 1;        // Gan ID tu dong tabg dan

        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        getchar();
        fgets(sinhVienArray[i].name, sizeof(sinhVienArray[i].name), stdin);
        if (sinhVienArray[i].name[strlen(sinhVienArray[i].name) - 1] == '\n') {
            sinhVienArray[i].name[strlen(sinhVienArray[i].name) - 1] = '\0'; // xoa ki tu xuong dong
        }
        printf("Tuoi: ");
        scanf("%d", &sinhVienArray[i].age);
        printf("So dien thoai: ");
        scanf("%s", sinhVienArray[i].phoneNumber);
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("  ID: %d\n", sinhVienArray[i].id);
        printf("  Ten: %s\n", sinhVienArray[i].name);
        printf("  Tuoi: %d\n", sinhVienArray[i].age);
        printf("  So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }

    return 0;
}

