#include "main.h"

/**
 * main - Enrty point
 *
 * Description: print _putchar using puchar prototype
 *
 * Return: Alease 0 (success)
*/

int main(void)
{
	char str[] = "_puchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
