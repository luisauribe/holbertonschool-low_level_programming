#include <stdio.h>
#include <unistd.h>

/**
 * main - This program prints exactly the sentence of Dora Korpar,
 * followed by a new line, to the standard error.
 *
 * Return: (1) to error.
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
