#include "holberton.h"
/**
 * jack_bauer - Prints minutes of a day.
 *
 */
void jack_bauer(void)
{
	int num0, num1, num2, num3;

	for (num0 = 48; num0 <= 50; num0++)
	{
		for (num1 = 48; num1 <= 57; num1++)
		{
			for (num2 = 48; num2 <= 53; num2++)
			{
				for (num3 = 48; num3 <= 57; num3++)
				{
					_putchar(num0);
					_putchar(num1);
					_putchar(':');
					_putchar(num2);
					_putchar(num3);
					_putchar('\n');
					if (num3 == 57 && num2 == 53 && num1 == 51 && num0 == 50)
					{
						num0 = 58;
						num1 = 58;
						num2 = 58;
						num3 = 58;
						break;
					}
				}
			}
		}
		num1 = 48;
	}
}

