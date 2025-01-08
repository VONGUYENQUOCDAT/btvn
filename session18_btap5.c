#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int findStudentById(struct SinhVien sinhVien[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (sinhVien[i].id == id) {
            return i; // Tra ve chi so sinh viên trong mang
        }
    }
    return -1; // Không tìm th?y
}

int main() {
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Nguyen Van B", 21, "0123456789"},
        {3, "Nguyen Van C", 19, "0123456789"},
        {4, "Nguyen Van D", 22, "0123456789"},
        {5, "Nguyen Van E", 20, "0123456789"}
    };
    int numberOfStudents = 5;
    // Nhap ID tim sinh vien
    int idToFind;
    printf("Nhap ID sinh vien can tim de sua thong tin: ");
    scanf("%d", &idToFind);
	// tim sv
    int index = findStudentById(sinhVien, numberOfStudents, idToFind);
    
    if (index == -1) {
        printf("Khong tim thay sinh vien co ID %d.\n", idToFind);
    } else {
        printf("Sua thong tin cho sinh vien co ID %d:\n", idToFind);
        printf("Nhap ten moi: ");
        getchar();
        fgets(sinhVien[index].name, sizeof(sinhVien[index].name), stdin);
        if (sinhVien[index].name[strlen(sinhVien[index].name) - 1] == '\n') {
            sinhVien[index].name[strlen(sinhVien[index].name) - 1] = '\0'; // xoa ki tu xuong dong
        }
        printf("Nhap tuoi moi: ");
        scanf("%d", &sinhVien[index].age);

        printf("Thong tin sinh vien da duoc cap nhat thanh cong!\n");
    }

    printf("\nDanh sach sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("ID: %d\n", sinhVien[i].id);
        printf("  Ten: %s\n", sinhVien[i].name);
        printf("  Tuoi: %d\n", sinhVien[i].age);
        printf("  So dien thoai: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

