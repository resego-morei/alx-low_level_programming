#include "main.h"

/**
 * print_array - function that reverses the content of
 * an array of integers.
 *
 * @a: int array
 * @n: number of element in an array
 */

void reverse_array(int *a, int n)
{
	int index = n - 1, tmp;

	while (index > n / 2)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
		index--;
	}
}
