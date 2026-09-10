//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, result;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        result = (sp - cp) * 100 / cp;
        printf("Profit Percentage = %.2f%%", result);
    }
    else if (cp > sp) {
        result = (cp - sp) * 100 / cp;
        printf("Loss Percentage = %.2f%%", result);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
