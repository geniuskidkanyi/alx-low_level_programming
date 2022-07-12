#include "main.h"

/**
 * swap_int - function with two int type pointer argument
 * @a: 1st argument int type
 * @b: 2nd argument int type
 *
 * Description: function that swaps the values of two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
