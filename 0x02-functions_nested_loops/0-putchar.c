#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putcher using putcher prototype
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putvhar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
