#include "main.h"

/**
 * strncpy - function that compares two strings.
 * @dest: pointer buffer that store
 * the copied string.
 * @src: source string pinter
 * @n:number of bytes to be copied
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index])
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
