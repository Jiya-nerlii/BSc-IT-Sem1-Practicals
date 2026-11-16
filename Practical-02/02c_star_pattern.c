#include <stdio.h>

int main() {
    int i, j, rows = 6;

    // Outer loop starts from max rows and counts down to 1
    for (i = rows; i >= 1; i--) {
        // Inner loop prints stars equal to the current row number
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
Sample Output:
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/
