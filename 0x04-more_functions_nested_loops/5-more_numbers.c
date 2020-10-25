#include "holberton.h"
/**
 * more_numbers - imprimir n del 0 al 14
 * description: imprimir x 10 del 0 al 14
 *
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}

	for (b = 10; b <= 14; b++)
	{
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
	}
	_putchar ('\n');
}
