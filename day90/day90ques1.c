//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    Male,
    Female
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;

    p.gender = Female;

    if (p.gender == Male)
        printf("Gender: Male");
    else
        printf("Gender: Female");

    return 0;
}
