#include "main.h"

/**
 * _strcat -  function that concatenates two strings
 *
 * @dest: pointer to destination of string
 * @src: source of the string concated
 *
 * Return: Concrated string
 */

char *_strcat(char *dest, char *src)
{
	int index, index_dest = 0, len = 0;

	while (dest[index_dest++])
	{
		len += 1;
	}

	for (index = 0; src[index]; index++)
	{
		dest[len++] = src[index];
	}

	return (dest);
}
