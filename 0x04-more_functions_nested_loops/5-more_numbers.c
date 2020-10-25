#include "holberton.h"
/**
 * more_numbers - imprimir n del 0 al 14
 * description: imprimir x 10 del 0 al 14
 *
 */
void more_numbers(void)
{
	int b;

	for (b = 0; b <= 14; b++)
	{
		if (b > 9)
			_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
	}
	_putchar ('\n');
}
