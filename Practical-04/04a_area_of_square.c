#include <stdio.h>

// Function declaration
float calculateArea(float side);

int main() {
    float side, area;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Function call
    area = calculateArea(side);

    printf("Area of the square = %.2f\n", area);

    return 0;
}

// Function definition
float calculateArea(float side) {
    return side * side;
}

/*
Sample Output:
Enter the side length of the square: 5.5
Area of the square = 30.25
*/
