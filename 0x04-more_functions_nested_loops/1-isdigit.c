#include "holberton.h"
#include <stdio.h>

/**
 *  _isdigit - function that checks for a digit
 *  @c: Numero.
 * Return: int.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
