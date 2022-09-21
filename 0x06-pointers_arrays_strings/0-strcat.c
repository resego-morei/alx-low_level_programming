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
	int index_dest, len = 0;

	for (index_dest = 0; dest[index_dest] != '\0'; index_dest++)
	{
		len += 1;
	}

	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[len++] = src[index];
	}

	return (dest);
}
