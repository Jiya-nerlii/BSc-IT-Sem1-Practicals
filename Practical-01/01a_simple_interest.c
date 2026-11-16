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
