#include "holberton.h"
#include <stdio.h>

/**
 *  _isupper - function that checks for uppercase character.
 *  @c: Numero.
 * Return: int.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
