#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	/* Iterate over the elements of the matrix and accumulate the sums*/
	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);/* main diagonal*/
		sum2 += *(a + i * size + (size - i - 1)); /* secondary diagonal*/
	}
	printf("%d, %d\n", sum1, sum2);
}

