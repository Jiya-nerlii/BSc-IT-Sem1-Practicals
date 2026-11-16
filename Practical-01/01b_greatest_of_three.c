#include <stdio.h>

int main() {
    int a, b, c, greatest;

    // Ask the user for three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the greatest number using the conditional (ternary) operator
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Display the result
    printf("Greatest number is: %d\n", greatest);

    return 0;
}
