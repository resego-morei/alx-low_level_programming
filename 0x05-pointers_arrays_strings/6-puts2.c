#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: entry string to be printed out
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			putchar(str[index]);
		}
		else
		{
			continue;
		}
		index++;
	}
	putchar('\n');
}
