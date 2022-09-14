#include "main.h"
/**
 * jack_bauer - function prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59, min loop counts mins, while hour loop counts hours and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs, mins, hrs_rem, mins_rem;
	char s = ':';

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			hrs_rem = hrs % 10;
			mins_rem = mins % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_rem + '0');
			_putchar(s);
			_putchar(mins / 10 + '0');
			_putchar(mins_rem + '0');
			_putchar('\n');
		}
		mins = 0;
	}
}
