/* 
NAME:CALEB NGUGI MBURU
REG:CT100/G/26188/25
DES:MARKS
*/
#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    FILE *file;
    struct Student student;

    file = fopen("results.dat", "w+"); 
    if (file == NULL) {
        printf("Error opening file or file not found!\n");
        return 1;
    }

    printf("Student Records:\n");
    printf("-----------------------------\n");

    // Read until end of file
    while (fread(&student, sizeof(student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Total Marks: %d\n\n", student.totalMarks);
    }

    fclose(file);

    return 0;
}