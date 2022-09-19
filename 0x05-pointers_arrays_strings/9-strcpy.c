#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - function that copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer desty
 * @src: pointer copia
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = *dest;

	for (;*src != '\0'; dest++, src++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (tmp);
}
