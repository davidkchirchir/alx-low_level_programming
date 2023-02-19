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
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{

			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
