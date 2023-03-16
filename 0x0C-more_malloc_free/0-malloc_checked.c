#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If malloc fails, the malloc_checked function should cause normal process
 *         termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

