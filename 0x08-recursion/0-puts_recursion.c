#include "main.h"

/**
 * void _puts_recursion(char *s);
 * Description: A function that prints a string,
 * followed by a new line.
 * Return: On success 1.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
