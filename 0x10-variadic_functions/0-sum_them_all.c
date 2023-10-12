#include "variadic_function.h"

/**
 * sum_them_all - returns the sum of all parameters.
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(params, int);
	}
	va_end(params);

	return (sum);
}
