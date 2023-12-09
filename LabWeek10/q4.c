#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int no;
    char name[50];
} Student;

int main() {
    // Create 3 Student objects
    Student students[3];
    students[0].no = 1;
    strcpy(students[0].name, "John Doe");
    students[1].no = 2;
    strcpy(students[1].name, "Jane Smith");
    students[2].no = 3;
    strcpy(students[2].name, "Mike Johnson");

    // Write Student objects to binary file
    FILE *file = fopen("/Users/ifozmen/Documents/CP3/LabWeek10/students.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(students, sizeof(Student), 3, file);
    fclose(file);

    // Read and display Student info from file
    file = fopen("/Users/ifozmen/Documents/CP3/LabWeek10/students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    Student readStudents[3];
    fread(readStudents, sizeof(Student), 3, file);
    fclose(file);

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("No: %d\n", readStudents[i].no);
        printf("Name: %s\n", readStudents[i].name);
        printf("\n");
    }

    return 0;
}
