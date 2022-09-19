#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * rev_string - function that reverses a string.
 *
 * @s: input string to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);

	int index = 0;

	int endstring = len - 1;

	int temp;

	while (index < endstring)
	{
		temp = s[index];
		s[index] = s[endstring];
		s[endstring] = temp;
		index++;
		endstring--;
	}
}
