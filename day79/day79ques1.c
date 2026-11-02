//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *f;
    int n, sum = 0, count = 0;

    f = fopen("numbers.txt", "r");

    while (fscanf(f, "%d", &n) != EOF) {
        sum += n;
        count++;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", (float)sum / count);

    fclose(f);
    return 0;
}
