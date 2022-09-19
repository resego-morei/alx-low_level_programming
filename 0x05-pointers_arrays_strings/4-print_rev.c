#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s: input string should reverse
 */

void print_rev(char *s)
{
	int index;

	int len = strlen(s);

	for (index = len - 1; index > 0; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}	
