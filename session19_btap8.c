#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
// sap xep sv
void sortStudentsByName(Student students[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void displayStudents(Student students[], int length) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < length; i++) {
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

    int currentLength = 5;

    displayStudents(students, currentLength); // danh sach sv ban dau

    printf("Sap xep sinh vien theo ten\n");
    sortStudentsByName(students, currentLength);

    displayStudents(students, currentLength); // danh sach sv sau khi sap xep

    return 0;
}

