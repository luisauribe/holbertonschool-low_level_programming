#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: number to compute.
 * Return: Absolute value.
 */
int _abs(int num)

{
	if (num >= 0)
	{
		return (num);

	}
	else
	{
		num = num * (-1);
		return (num);
	}

}
