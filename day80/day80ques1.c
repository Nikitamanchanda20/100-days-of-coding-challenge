//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *f;
    char name[20];
    int roll, marks, i;

    f = fopen("student.txt", "w");

    for(i = 0; i < 2; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }
    fclose(f);

    f = fopen("student.txt", "r");

    while(fscanf(f, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(f);
    return 0;
}
