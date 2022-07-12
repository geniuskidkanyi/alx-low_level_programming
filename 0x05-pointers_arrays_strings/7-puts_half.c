#include "main.h"

/**
 * puts_half - void puts_half(char *str);
 * @str: char type
 *
 * Description: A function should print the second half of the string
 * Return: na
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
		len = (len + 1) / 2;
	else
		len /= 2;
	while (len < i)
	{
		len++;
		_putchar(*(str + len - 1));
	}
	_putchar('\n');
}
