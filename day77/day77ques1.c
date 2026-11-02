//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *a, *b;
    char ch;

    a = fopen("input.txt", "r");
    b = fopen("output.txt", "w");

    while ((ch = fgetc(a)) != EOF)
        fputc(toupper(ch), b);

    fclose(a);
    fclose(b);
    return 0;
}
