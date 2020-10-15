#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 *
 */

void print_alphabet_x10(void)
{
	int alphabet = 'a';
	int counter;

	for (counter = 0;  counter < 10; counter++)
	{

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;

	}
	_putchar('\n');
	alphabet = 'a';
	}

}
