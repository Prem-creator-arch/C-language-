//WAP to divide two numbers and use type casting operation (e.g. mean = (double)sum/n;). 
#include <stdio.h>

int main() {
    int num1, num2;
    double result;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit with error
    }

    // Perform division with type casting
    result = (double)num1 / num2;

    // Output the result
    printf("The result of dividing %d by %d is: %.2f\n", num1, num2, result);

    return 0; // Exit successfully
}

