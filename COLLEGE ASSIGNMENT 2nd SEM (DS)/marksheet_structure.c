#include <stdio.h>
struct Marksheet 
{
    char name[50];
    int rollNumber;
    float marks[5];
    float total;
    float percentage;
};

int main() 
{
    struct Marksheet student;
    int i;
    
    printf("\n Enter student name: ");
    fgets(student.name,50,stdin);
    
    printf("\n Enter roll number: ");
    scanf("%d", &student.rollNumber);
    
    printf("\n Enter marks for 5 subjects: ");
    student.total = 0;
    for (i = 0; i < 5; i++) {
        printf("\n Subject %d: ", i+1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i];
    }
    
    student.percentage = student.total / 5;
    
    printf("\n Name: %s", student.name);
    printf(" Roll Number: %d", student.rollNumber);
    printf("\n Marks in Subjects :");
    for (i = 0; i < 5; i++) {
        printf("\n Subject %d: %.2f", i+1 , student.marks[i]);
    }
    printf("\n Total Marks: %.2f", student.total);
    printf("\n Percentage: %.2f", student.percentage);
    
    if (student.percentage >= 60) 
    {
        printf("\n Result: First Division");
    } 
    else if (student.percentage >= 45) 
    {
        printf("\n Result: Second Division");
    } 
    else if (student.percentage >= 33) 
    {
        printf("\n Result: Third Division");
    } 
    else 
    {
        printf("\n Result: Fail");
    }
    return 0;
}