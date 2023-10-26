#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base
 * @power: power
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int d;

	num = 1;
	for (d = 1; d <= power; d++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints a number in binary
 * @n: number
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
