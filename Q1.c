//Write a c program to find the factorial of a number using a recursive function.
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("\nFactorial for negative number is not defined");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    return 0;
}