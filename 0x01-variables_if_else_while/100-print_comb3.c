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
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	
			if (i != j)
			{
				for (k=18; k>=17; k--)
				{
					if (i+j == k)
					{
						putchar(i+'0');
						putchar(j+'0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
