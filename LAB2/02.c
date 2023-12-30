/*
Write a C program that prints on the screen the first N numbers of Fibonacci series (N should be 
acquired from keyboard).
Suggestion: Fibonacci series is 0 1 1 2 3 5 8 … It can be developed by applying the following: 
Xi = Xi-1 + Xi-2, where X0 = 0 and X1 = 1.
In-depth 
Modify the series as follows: Xi = Xi-1 * Xi-2, with X0 = 1 and X1 = 2
Try to determine experimentally (i.e., by analysing the results that you obtain with increasingly 
larger number of elements of the series) how many elements can be represented without error if 
you use int variables or if you use unsigned int variables, respectively. 

*/
#include <stdio.h>

// Function to print the first N numbers of the modified Fibonacci series
void printFibonacci(int n) {
    int fib[n];
    fib[0] = 1;
    fib[1] = 2;

    // Generate the modified Fibonacci series
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] * fib[i - 2];
    }

    // Print the series
    printf("Modified Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int N;

    // Input the value of N from the user
    printf("Enter the value of N for the Fibonacci series: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer for N.\n");
        return 1;  // Exit with an error code
    }

    // Print the first N numbers of the modified Fibonacci series
    printFibonacci(N);

    return 0;  // Exit successfully
}
