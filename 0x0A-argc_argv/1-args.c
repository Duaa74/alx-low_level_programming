#include <stdio.h>

/**
 * main - print the number of arguments passed
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0-Success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
