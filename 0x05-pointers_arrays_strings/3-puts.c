#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: the input string
 *
 */
void _puts(char *str)
{
	int index;
       
int len = strlen(str);

	for (index = 0; index < len; index++)
	{
		putchar(str[index]);
	}
	putchar('\n');
}
