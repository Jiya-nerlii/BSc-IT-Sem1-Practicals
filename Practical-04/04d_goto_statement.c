#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        goto even; // Jump to 'even' label
    } else {
        goto odd;  // Jump to 'odd' label
    }

even:
    printf("%d is an Even number.\n", num);
    return 0;

odd:
    printf("%d is an Odd number.\n", num);
    return 0;
}

/*
Sample Output:
Enter a number to check if it is even or odd: 14
14 is an Even number.
*/
