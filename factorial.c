#include <stdio.h>

void main () {
    int result = 1, number;

    printf("Enter a number:");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    printf("%d", result);
    
}        