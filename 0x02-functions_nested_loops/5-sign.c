#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n: the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	char pos = '+', neg = '-', neu = '0';

	if (n < 0)
	{
		_putchar(neg);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(pos);
		return (1);
	}
	else
	{
		_putchar(neu);
		return (0);
	}
}
