#include <stdio.h>

void factorial(int num, int *fact_ptr);

int main() {
    int num, fact = 1;
    int *fact_ptr = &fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, fact_ptr);

    printf("Factorial of %d is: %d\n", num, *fact_ptr);

    return 0;
}

void factorial(int num, int *fact_ptr) {
    int i;

    for (i = 1; i <= num; i++) {
        *fact_ptr *= i;
    }
}