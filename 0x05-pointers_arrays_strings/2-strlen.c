#include "main.h"

/**
 * _strlen - int _strlen(char *s)
 * @s: char type pointer
 *
 * Description: function that returns the length of a string.
 * Return: string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
