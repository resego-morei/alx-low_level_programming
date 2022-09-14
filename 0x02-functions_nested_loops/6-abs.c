#include <stdio.h>
#include "main.h"
/**
 * _abs - function computes absolute value of an integer
 * @c: the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
