// Write a program to calculate electricity bill based on units consumed with these rates.
//first 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>

int main()
{
    int unit, rate;

    printf("Your units consumed: ");
    scanf("%d", &unit);

    if(unit <= 100)
    {
        rate = unit * 5;
    }
    else if(unit <= 200)
    {
        rate = 100 * 5 + (unit - 100) * 7;
    }
    else if(unit <= 300)
    {
        rate = 100 * 5 + 100 * 7 + (unit - 200) * 10;
    }
    else
    {
        rate = 100 * 5 + 100 * 7 + 100 * 10 + (unit - 300) * 12;
    }

    printf("Your bill for %d units is %d rupees", unit, rate);

    return 0;
}
