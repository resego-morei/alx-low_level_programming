#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}
