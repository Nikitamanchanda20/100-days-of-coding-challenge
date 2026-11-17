//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student
{
    int roll;
    int marks;
};

void display(struct Student s)
{
    printf("Roll Number = %d\n", s.roll);
    printf("Marks = %d\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    display(s);

    return 0;
}
