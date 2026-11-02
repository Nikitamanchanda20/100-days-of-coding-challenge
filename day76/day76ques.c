//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    int m, n, i, j, t;
    scanf("%d %d", &m, &n);
    int a[m+n];

    for(i = 0; i < m+n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < m+n; i++) {
        for(j = i+1; j < m+n; j++) {
            if(a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i = 0; i < m+n; i++)
        printf("%d ", a[i]);
    return 0;
}
