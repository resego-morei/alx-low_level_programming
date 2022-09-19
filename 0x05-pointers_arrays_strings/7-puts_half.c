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
	int split_len = strlen(str) / 2;

	if ((strlen(str)) % 2 == 1)
	{
		split_len += 1;
	}
	while (split_len < strlen(str))
	{
		putchar(str[split_len]);
		split_len++;
	}
	putchar('\n');
}
