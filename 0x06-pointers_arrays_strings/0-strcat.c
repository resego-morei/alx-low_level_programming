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
	int index_dest;

	for (index_dest = 0; dest[index_dest] != '\0'; index_dest++);

	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index_dest + index] = src[index];
	}

	dest[index_dest + index] = '\0';


	return (dest);
}
