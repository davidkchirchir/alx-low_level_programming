#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - In this program, we use a for loop to iterate over all HEX numbers
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
	for (n = 10; n <= 16; n++)
	{
		putchar(n - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
