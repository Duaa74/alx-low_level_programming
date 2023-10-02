#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all start here
 * @argc: the number of arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m, sum = 0;

	if (argc < 1)
		return (0);

	for (m = 1; m < argc; m++)
	{
		if (!atoi(argv[m]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[m]);
	}
	printf("%d\n", sum);

	return (0);
}
