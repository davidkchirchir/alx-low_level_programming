#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int limit = 4000000;
    int sum = 0;
    int fib1 = 1, fib2 = 2, fib3;

    while (fib2 <= limit)
    {
        if (fib2 % 2 == 0)
        {
            sum += fib2;
        }

        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("%d\n", sum);

    return (0);
}

