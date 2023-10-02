#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1, otherwise 0 if two arguments not received
 */
int main(int argc, char *argv[])
{
	int i, m;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = 1;

		for (i = 1; i < 3; i++)
		m *= atoi(argv[i]);

		printf("%d\n", m);
	}
	return (0);
}
