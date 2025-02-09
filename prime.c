#include<stdio.h>

void main () {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int isPrime = 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        } else {
            isPrime = 1;
        }
        
    }

    if(isPrime) {
        printf("This is a prime number");
    } else {
        printf("This is not a prime number.");
    }


    
}