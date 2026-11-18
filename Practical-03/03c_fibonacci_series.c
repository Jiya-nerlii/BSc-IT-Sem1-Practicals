#include <stdio.h>

int main() {
  int n, i;
  int t1 = 0, t2 = 1, nextTerm;

  printf("Enter the number of terms: ");
  scandf("%d" , &n);

  printf("Fibonacci Series: ");

  for (i = 1; i<= n; i++) 
  {
  printf("%d" , t1);
  nextTerm = t1 + t2;
  t1 = t2;
  t2 = nextTerm;
  }
printf("\n");

return 0;
}

/*
Sample Output:
Enter the number of terms: 7
Fibonacci Series: 0 1 1 2 3 5  8 
*/
