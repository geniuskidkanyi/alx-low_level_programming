#include "main.h"

/**
 * 0-puts_recursion.c - void _puts_recursion(char *s);
 * Description: A function that prints a string,
 * followed by a new line.
 * @s: string
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
