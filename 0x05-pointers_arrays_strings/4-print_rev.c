#include "main.h"

/**
 * print_rev - void print_rev(char *s);
 * @s: 1st argument char type
 *
 * Description: function that prints a string, in reverse,
 * followed by a new line.
 * Return: na
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	};
	_putchar('\n');
}
