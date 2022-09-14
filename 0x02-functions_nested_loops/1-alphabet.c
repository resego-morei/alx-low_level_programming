#include "main.h"

/**
 * print_alphabet - function to print abc
 * Return: 0
 */

void print_alphabet(void)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}


