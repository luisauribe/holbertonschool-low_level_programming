#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to raise
 * @y: value of power
 * Return: if y >= 0 x ^ y, else -1
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y == 0)
		return (1);
	else if (y > 0)
		return (pow = x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
