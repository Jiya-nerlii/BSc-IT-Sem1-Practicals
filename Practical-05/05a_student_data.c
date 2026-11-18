#include <stdio.h>

int main() {
    int roll[10];
    char name[10][50];
    int i;

    printf("Enter roll number and name for 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d Roll No: ", i + 1);
        scanf("%d", &roll[i]);
        printf("Student %d Name: ", i + 1);
        scanf(" %[^\n]", name[i]); // Reads full name including spaces
    }

    printf("\n--- Student Details ---\n");
    printf("Roll No.\tName\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t\t%s\n", roll[i], name[i]);
    }

    return 0;
}

/*
Sample Output:
Enter roll number and name for 10 students:
Student 1 Roll No: 101
Student 1 Name: Jiya Nerli
...
--- Student Details ---
Roll No.    Name
101         Jiya Nerli
...
*/
