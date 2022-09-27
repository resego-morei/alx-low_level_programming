#include "main.h"

/**
 * strchr -  function that locates a character in a string.
 *
 * @s: the string to be checked
 * @c: the character we are searching for
 *
 * Return:  pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s += 1;
		}

		else
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
