#include <stdio.h>
#include <string.h>

/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *program_name = strrchr(argv[0], '/');

	printf("%s\n",argv[0]);
	return (0);
}
