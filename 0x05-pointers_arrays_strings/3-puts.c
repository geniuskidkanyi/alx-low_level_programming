#include "main.h"

/**
 * _puts - void _puts(char *str);
 * @str: one char type argument
 *
 * Description: function that prints a string, followed by a new line, to stdout
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
