#include <stdio.h>

struct Marksheet 
{
    char name[50];
    int rollNumber;
    float marks[5];
    float total;
    float percentage;
};

int main() {
    struct Marksheet student;
    int i;
    
    printf("Enter student name: ");
    fgets(student.name,50,stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    
    printf("Enter marks for 5 subjects:\n");
    student.total = 0;
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i];
    }
    
    student.percentage = student.total / 5;
    
    
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks in Subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i+1 , student.marks[i]);
    }
    printf("Total Marks: %.2f\n", student.total);
    printf("Percentage: %.2f%%\n", student.percentage);
    
    if (student.percentage >= 60) {
        printf("Result: First Division\n");
    } else if (student.percentage >= 45) {
        printf("Result: Second Division\n");
    } else if (student.percentage >= 33) {
        printf("Result: Third Division\n");
    } else {
        printf("Result: Fail\n");
    }
    
    return 0;
}