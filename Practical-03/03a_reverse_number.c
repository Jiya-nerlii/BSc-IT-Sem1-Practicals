#include <stdio.h>

int main() 
{
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop until all digits are processed
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}

/*
Sample Output:
Enter an integer: 12345
Reversed number = 54321
*/
