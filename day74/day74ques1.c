//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], destination[100];
    int ch;

    scanf("%s", source);
    scanf("%s", destination);

    src = fopen(source, "r");
    dest = fopen(destination, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully");

    return 0;
}
