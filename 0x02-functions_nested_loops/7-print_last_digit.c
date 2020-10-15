#include "holberton.h"

/**
 * print_last_digit - prits the last digit of a number.
 * @num: character to test.
 * Return: value of the last digit.
 */

int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
	{
		num = -num;
	}
	_putchar (num + '0');
	return (num);
}
