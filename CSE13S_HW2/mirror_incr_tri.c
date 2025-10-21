/* Implement a mirrored increasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include<stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");

  /* TODO: read the value for n and print the first n rows of the above pattern */
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
      for (int j = i-1; j >= 1; j--) {
          printf("  ");
      }
      for (int k = 1; k <= n-i+1; k++) {
        printf("* ");
      }
      printf("\n");
  }

  
  return 0;
}