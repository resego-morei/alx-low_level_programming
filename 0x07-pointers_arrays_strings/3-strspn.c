#include "main.h"

/**
 * strspn - function that gets the length of a prefix substring.
 *
 * @s: segment that we have to return bytes from
 * @accept: the bytes to included or accepted
 *
 * Return:  number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int tally = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (int j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					tally += 1;
				}
			}
		}

		else
		{
			return (tally);
		}
	}
	return (tally);
}
