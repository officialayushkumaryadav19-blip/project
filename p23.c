#include <stdio.h>
int main() {
    // Declare variables for input and result
    int num1, num2, result;
    char operator;
    // Display menu options to the user
    printf("Select an operation (+, -, *, /): ");
    scanf(" %c", &operator);  // Takes the operator input
    // Take two integer inputs
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Switch statement to handle the operation based on user input
    switch (operator) {
        case '+':
            result = num1 + num2; // If operator is '+', add the numbers
            break;
        case '-':
            result = num1 - num2; // If operator is '-', subtract the numbers
            break;
        case '*':
            result = num1 * num2; // If operator is '*', multiply the numbers
            break;
        case '/':
            if (num2 != 0) {   // Check if divisor is not zero
                result = num1 / num2; // If operator is '/', divide the numbers
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit if division by zero occurs
            }
            break;
        default:
            printf("Invalid operator!\n"); // If user enters an invalid operator
            return 1; // Exit if invalid operator is entered
    }
    // Display the result
    printf("Result: %d\n", result);
    return 0;
}