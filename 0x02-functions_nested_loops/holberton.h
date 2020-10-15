#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
/**
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

/* writes the character c to stdout */
int _putchar(char c);

/* prints the alphabet in lowercase */
void print_alphabet(void);

/* prints the alphabet in lowercase x10 */
void print_alphabet_x10(void);

/* checks for lowercase character. */
int _islower(int c);

/* checks for alphabetic character. */
int _isalpha(int c);

/* prints the sign of a number. */
int print_sign(int n);

/* computes the absolute value of an integer. */
int _abs(int);

/* prints the las digit of a number. */
int print_last_digit(int);

/* prints every minute of the day. */
void jack_bauer(void);

/* prints the 9 times table, starting with 0. */
void times_table(void);

/* adds two intigers and returns the result. */
int add(int, int);

/* prints all natural numbers from n to 98, followed by a new line. */
void print_to_98(int n);

/* prints a triangle, followed by a new line. */
void print_triangle(int size);

#endif /* _SAMPLE_HEADER_H_ */
