#include "main.h"
/**
 * print_last_digit - last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar(n % 10, n);
	return (n % 10);
}
