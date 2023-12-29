/*
Exercise 5. Write a “calculator” in C, that is able to perform basic arithmetic operations (addition, subtraction, division and multiplication) on two given inputs op1 and op2.
Write a C program that:
a) Acquires a character from keyboard using getchar (either ‘+’, ‘-‘, ‘*’ or ‘/’) to decide 
which should be the arithmetic operation to perform;
b) Acquires two float operands (ex. 21.0 and 2.0) from keyboard, using scanf.
c) Prints the selected operator on the screen, followed by the result of the operation (for 
example: / 10.50).
Careful: What happens if op2 is 0? How do you handle the problem?
*/
#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    float op1, op2, result;

    //Step a: Acquire Operator
    printf("Enter operator (+ - * /): ");
    operator = getchar();

    //Step b: Acquire two float operands
    printf("Enter operand 1: ");
    scanf("%f", &op1);

    printf("Enter operand 2: ");
    scanf("%f", &op2);

    //Step C: Perform the selected operation and handle division by zero

    switch (operator) {
        case '+':
            result = op1 + op2;
            printf("%.2f  %c  %.2f  = %.2f\n", op1, operator, op2, result);
            break;

        case '-':
            result = op1 - op2;
            int final_Result = fabsf(result);
            printf("%.2f  %c  %.2f = %.2f\n", op1, operator, op2, final_Result);
            break;

        case '*':
            result = op1 * op2;
            printf("%.2f  %c  %.2f = %.2f\n", op1, operator, op2, result);
            break;

        case '/':
            if (op2 != 0){
                result = op1/op2;
                printf("%.2f  %c %.2f = %.2f\n", op1, operator, op2, result);
            }
            else{
                printf("Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid Operations\n");
            return 1;

    }
    return 0;

}
