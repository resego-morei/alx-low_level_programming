#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: input string of the function
 */

void puts_half(char *str)
{
	int len = strlen(str);

	int split_len = len / 2;

	if (len % 2 == 1)
	{
		split_len += 1;
	}
	while (split_len < len)
	{
		putchar(str[split_len]);
		split_len++;
	}
	putchar('\n');
}
