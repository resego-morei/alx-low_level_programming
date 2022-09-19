#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: entry string of the function
 *
 * Return: void
 */

int _atoi(char *s)
{
	int i = 1;
	
	unsigned int n = 0;

	char *temp = s;

	char lower = '0', upper = '9';

	for (; (*temp < lower || *temp > upper) && *temp != '\0';)
	{
		if (*temp == '-')
		{
			i *= -1;
		}
		temp += 1;
	}
	if (*temp != '\0')
	{
		do {
			n = 10 * n + (*temp - '0');
			temp += 1;
		} while (*temp >= lower && *temp <= upper);
	}
	return (n * i);
}
