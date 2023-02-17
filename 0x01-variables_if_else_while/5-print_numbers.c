#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - In this program, we use a for loop to iterate over number 1 to 9
 *
 *Return: Always 0 (Succss)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
