#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int x, a, b, c, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = y * x;
			b = a / 10;
			c = a % 10;
			if (x == 0)
			{
				_putchar(0 + '0');

			}
			else if (b == 0 && x != 0)
			{
				_putchar(' ');
				_putchar(c + '0');

			}
			else
			{
				_putchar(b + '0');
				_putchar(c + '0');

			}
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');

			}
			else
				_putchar('\n');

		}

	}

}
