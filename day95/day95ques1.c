//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student
{
    int roll;
    int marks;
};

struct Student topStudent()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    return s;
}

int main()
{
    struct Student s;

    s = topStudent();

    printf("\nTop Student Details\n");
    printf("Roll Number = %d\n", s.roll);
    printf("Marks = %d\n", s.marks);

    return 0;
}
