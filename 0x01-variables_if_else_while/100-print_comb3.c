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

	for (i = '0'; i < '9'; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
