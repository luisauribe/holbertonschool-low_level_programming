#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
			alphabet++;
	}
	_putchar('\n');

}
