#include "main.h"
#include "string.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int len = sizeof(str);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	putchar(len);
	return (0);
}
