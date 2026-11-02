//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f;
    char ch;
    int v = 0, c = 0;

    f = fopen("input.txt", "r");

    while ((ch = fgetc(f)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                v++;
            else
                c++;
        }
    }

    fclose(f);

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);

    return 0;
}
