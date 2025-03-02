#include <stdio.h>

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = 0;

    for (int i = 0; i <= num; i++)
    {
        result += i;
    }

    printf("The sum of first %d number is: %d",num, result);
    

    return 0;
}