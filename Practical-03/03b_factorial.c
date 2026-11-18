#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

/*
Sample Output:
Enter a positive integer: 5
Factorial of 5 = 120
*/
