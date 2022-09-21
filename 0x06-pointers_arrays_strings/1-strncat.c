#include "main.h"

/**
 * strncat - function that concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, len = 0;

	for (index = 0; dest[index]; index++)
	{
		len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[len++] = src[index];
	}
	
	return (dest);
}
