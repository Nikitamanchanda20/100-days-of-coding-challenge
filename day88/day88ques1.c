//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    for(r = ADMIN; r <= GUEST; r++) {
        printf("%d\n", r);
    }

    return 0;
}
