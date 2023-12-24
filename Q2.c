//write a c program to print student marksheet using structures
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks[4];
    float totalMarks;
    float percentage;
};
void calculateResult(struct Student *student) {
    student->totalMarks = 0;
    for (int i = 0; i < 4; ++i) {
        student->totalMarks += student->marks[i];
    }
    student->percentage = (student->totalMarks / 400) * 100;
}
void displayMarkSheet(struct Student student) {
    printf("\n----- Student Mark Sheet -----\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    
    printf("Marks in each subject:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Subject %d: %.2f\n", i + 1, student.marks[i]);
    }

    printf("Total Marks: %.2f\n", student.totalMarks);
    printf("Percentage: %.2f%%\n", student.percentage);}

int main() {
    struct Student students[3]; 
    for (int i = 0; i < 3; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter student name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks in each subject:\n");
        for (int j = 0; j < 4; ++j) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        calculateResult(&students[i]);
    }
    for (int i = 0; i < 3; ++i) {
        displayMarkSheet(students[i]);
    }
    return 0;
}