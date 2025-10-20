/* Implementing a basic arithmetic calculator */

#include <stdio.h>

int main() {
    int choice, num1, num2;
    float result;

    /* TODO: display the menu of options and take user input, perform the chosen operation and display result.
             your program should continue until the user chooses to exit. 
             format your print statements exactly as the ones shown in sample output in the pdf */
    while (1) {
        printf("Press 1 for addition (+)\n");
        printf("Press 2 for subtraction (-)\n");
        printf("Press 3 for multiplication (*)\n");
        printf("Press 4 for division (/)\n");
        printf("Press 5 for modulus (%%)\n");
        printf("Press 6 for exit\n");

        printf("Please enter your choice (1-6): ");
        scanf("%d", &choice);

        if (!(choice >= 1 && choice <= 6)) {
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
            choice = 1;
            continue;
        }

        if (choice == 6) {
            printf("Exiting the program. Thank you!\n");
            break;
        }

        printf("Please enter two integers: ");
        scanf("%d %d", &num1, &num2);

        if ((choice == 5 || choice == 4) && num2 == 0) {
            printf("Error: Modulus by zero is not allowed.\n");
            continue;
        }

        if (choice == 1){
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
        }
        if (choice == 2){
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
        }
        if (choice == 3){
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
        }
        if (choice == 4){
            result = (float) num1 / num2;
            printf("Result: %d / %d = %.2f\n", num1, num2, result);
        }
        if (choice == 5){
            result = num1 % num2;
            printf("Result: %d %% %d = %.2f\n", num1, num2, result);
        }
        

        
        





    }
  
    return 0;
}
