#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Nguyen Van B", 21, "0123456789"},
        {3, "Nguyen Van C", 19, "0123456789"},
        {4, "Nguyen Van D", 22, "0123456789"},
        {5, "Nguyen Van E", 20, "0123456789"}
    };

    int numberOfStudents = 5;

    // Them sv moi
    printf("Nhap thong tin sinh vien can them:\n");
    sinhVien[numberOfStudents].id = numberOfStudents + 1;     // Gan ID tu dong tang
    printf("Ten: ");
    getchar();
    fgets(sinhVien[numberOfStudents].name, sizeof(sinhVien[numberOfStudents].name), stdin);
    if (sinhVien[numberOfStudents].name[strlen(sinhVien[numberOfStudents].name) - 1] == '\n') {
        sinhVien[numberOfStudents].name[strlen(sinhVien[numberOfStudents].name) - 1] = '\0'; // xoa ki tu xuong dong
    }
    printf("Tuoi: ");
    scanf("%d", &sinhVien[numberOfStudents].age);
    printf("So dien thoai: ");
    scanf("%s", sinhVien[numberOfStudents].phoneNumber);

    numberOfStudents++;

    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("  ID: %d\n", sinhVien[i].id);
        printf("  Ten: %s\n", sinhVien[i].name);
        printf("  Tuoi: %d\n", sinhVien[i].age);
        printf("  So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

