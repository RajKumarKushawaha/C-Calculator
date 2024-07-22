#include <stdio.h>
#include <conio.h>

void main() {
    char operator;
    double num1, num2, result;

    // Input what type of operation perform by user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Input the numbers by user
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the operation in calculator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    getch();
}
