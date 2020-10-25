#include "holberton.h"
/**
 * more_numbers - imprimir n del 0 al 14
 * description: imprimir x 10 del 0 al 14
 *
 */
void more_numbers(void)
{
	char f, n;

	f = 0;

	while (f < 10)
	{
		n = 0;

		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		f++;
	}
}
