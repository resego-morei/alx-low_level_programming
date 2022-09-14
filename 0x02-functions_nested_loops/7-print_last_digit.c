#include "main.h"
/**
 * print_last_digit - Prints last digit of number
 * @n: number in the question
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');

	return(last);
}
