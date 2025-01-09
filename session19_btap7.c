#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
// ham xoa sv
void deleteStudentById(int id, Student students[], int *currentLength) {
    int found = 0;
    for (int i = 0; i < *currentLength; i++) {
        if (students[i].id == id) {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++) { // di chujyen cac phan tu
                students[j] = students[j + 1];
            }
            (*currentLength)--;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien ID: %d\n", id);
    }
}

void displayStudents(Student students[], int currentLength) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].phoneNumber);
    }
    printf("\n");
}

int main() {
    Student students[5] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Nguyen Van B", 21, "0123456789"},
        {3, "Nguyen Van C", 22, "0123456789"},
        {4, "Nguyen Van D", 23, "0123456789"},
        {5, "Nguyen Van E", 24, "0123456789"}
    };

    int currentLength = 5; // so luong sv

    displayStudents(students, currentLength); // hien thi sv ban dau
    printf("Xoa sinh vien ID = 2\n");
    deleteStudentById(2, students, &currentLength); // xoa sv ID 2

    displayStudents(students, currentLength); // danh sach sau khi xoa

    return 0;
}

