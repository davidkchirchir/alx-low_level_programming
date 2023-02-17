#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - In this program, we use a for loop to iterate over the ASCII codes
 *for the lowercase letters from 'a' to 'z'.
 *Return: Always 0 (Succss)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
