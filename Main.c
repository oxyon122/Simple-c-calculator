#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 4) {
        int num1, num2, result;
        char ch;

        printf("\nIteration %d\n", i + 1);
        
        printf("Enter first number: ");
        scanf("%d", &num1); 

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &ch);

        printf("Enter second number: ");
        scanf("%d", &num2); 

        switch (ch) {
            case '+':
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Invalid operator!\n");
        }
        i++;
    } 
    return 0;
} 
