#include <stdio.h>

// Recursive function declaration
unsigned long long factorial(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }

    return 0;
}

// Recursive function definition
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive call
}

/*
Sample Output:
Enter a positive integer: 6
Factorial of 6 = 720
*/
