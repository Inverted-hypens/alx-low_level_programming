#include "main.h"

/**
 * jack_bauer - prints every minute of the longest day of Jack Bauer's life
 * from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h, m;
/* h = hr, m = mins*/

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar (h / 10 + '0');
			_putchar (h % 10 + '0');
			_putchar (':');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar ('\n');
		}
	}
}
