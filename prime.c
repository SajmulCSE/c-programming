#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int isPrime = 1;

    if (num == 0 || num == 1)
    {
        printf("%d is not prime number", num);
    }
    else
    {

        int halfNum = num / 2;

        for (int i = 2; i <= halfNum; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d is a prime number.", num);
        }
        else
        {
            printf("%d is not a prime number.", num);
        }
    }
}