#include <stdio.h>

int main() {
    int year;

    // Ask the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // A year is a leap year if divisible by 400, OR divisible by 4 but not 100
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/*
Sample Output:
Enter a year: 2024
2024 is a leap year
*/
