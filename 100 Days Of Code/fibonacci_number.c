/*Implement a function to calculate the nth Fibonacci number using recursion.*/
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n to calculate the nth Fibonacci number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    }
    
    return 0;
}
