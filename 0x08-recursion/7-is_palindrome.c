#include "holberton.h"
/**
 * _length - calcules the length of the string
 * @s: string to analyze.
 *
 * Return: length of string.
 */

int _length(char *s)
{
	if (s[0])
		return (1 + _length(s + 1));
	else
		return (0);
}
/**
 * _check - checks if string is palindrome.
 * @s: string to analyze.
 * @l: length of string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int _check(char *s, int l)
{
	if (l <= 1)
		return (1);
	else if (s[0] == s[l - 1])
	{
		return (_check(s + 1, l - 2));
	}
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome 0 if not.
 * @s: string to analyze.
 * Return: 1 palindrome 0 otherwise.
 */

int is_palindrome(char *s)
{
	int l;

	l = _length(s);
	if (l <= 1)
		return (1);
	else
		return (_check(s, l));
}
