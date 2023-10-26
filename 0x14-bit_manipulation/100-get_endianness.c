#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0
 */
int get_endianness(void)
{
	int d;
	char *b;

	d = 1;
	b = (char *)&d;
	return (*b);
}
