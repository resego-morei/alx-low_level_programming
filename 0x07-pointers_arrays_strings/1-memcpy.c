#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 *
 * @dest: destination area where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
