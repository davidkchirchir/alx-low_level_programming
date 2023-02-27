#include "main.h"

/**
*swap_int - swaps two integers
*@a: first integer
*@b: second integer
*Return: nothing is returned
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
