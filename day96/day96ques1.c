//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    int id;
    char name[50];
    struct Date joining;
};

int main()
{
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("\nEmployee Details\n");
    printf("ID = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Joining Date = %d/%d/%d\n", e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
