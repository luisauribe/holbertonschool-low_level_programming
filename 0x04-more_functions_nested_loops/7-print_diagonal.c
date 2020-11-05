#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number.
 *
 * REturn: none.
 */

void print_diagonal(int n)
{

	int i, r;

	for (i = 0; i < n; i++)
	{
		for (r = 0; r < i; r++)

			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}
	if (n <= 0)
		_putchar('\n');
}
