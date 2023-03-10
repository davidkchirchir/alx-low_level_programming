#include <stdio.h>
#include <string.h>

/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	char *program_name = strrchr(argv[0], '/');

	printf("%s\n", (program_name != NULL ? program_name + 1 : argv[0]));
	return (0);
}
