#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of array
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
