//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
    int age;
};
int main()
{
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter roll, name and age of student %d:\n", i+1);
        scanf("%d %s %d", &s[i].roll, s[i].name, &s[i].age);
    }
    printf("\nStudent Details:\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d\n", s[i].age);
    }
    return 0;
}
