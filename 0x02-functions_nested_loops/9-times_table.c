#include "main.h"
/**
 * times_table - Prints 9 time table, starting with 0.
 */
void times_table(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
			}

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
