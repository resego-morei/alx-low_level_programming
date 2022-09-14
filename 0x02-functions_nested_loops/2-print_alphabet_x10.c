#include "main.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch = 'a', i = 0;

	for(;i < 10; i++)
	{
		for(; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}	
