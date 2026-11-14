//Find and print the student with the highest marks.o
#include <stdio.h>

struct Student
{
    char name[20];
    int marks;
};

int main()
{
    struct Student s[5];
    int i, max = 0, pos = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name and marks:\n");
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    for(i = 0; i < 5; i++)
    {
        if(s[i].marks > max)
        {
            max = s[i].marks;
            pos = i;
        }
    }

    printf("Highest marks student:\n");
    printf("Name: %s\n", s[pos].name);
    printf("Marks: %d\n", s[pos].marks);

    return 0;
}

