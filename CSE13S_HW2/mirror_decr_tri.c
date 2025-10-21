/* Implement an inverted mirrored triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

* * * * *
  * * * *
    * * *
      * *
        *  

*/

#include <stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");

  /* TODO: read the value for n and print the first n rows of the above pattern */
  scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j+1 <= i; j++) {
            printf("  ");
        }
        for (int k = n-i+1; k >= 1; k--) {
          printf("* ");
        }
        printf("\n");
    }

  return 0;
}