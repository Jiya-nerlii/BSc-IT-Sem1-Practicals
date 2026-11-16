#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Ask the user for inputs
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Display the result up to 2 decimal places
    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}
/*
Sample Output:
Enter the Principal amount: 10000
Enter the Rate of Interest (in %): 5
Enter the Time period (in years): 2

    Simple Interest = 1000.00
*/
