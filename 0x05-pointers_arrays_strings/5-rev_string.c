#include "main.h"

/**
 * rev_string - void rev_string(char *s);
 * @s: char type argument
 *
 * Description: a function that reverses a string
 * Return: na
 */
void rev_string(char *s)
{
	int i, k, tmp, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
