#include "main.h"
#include "stdio.h"

/**
 * print_array - void print_array(int *a, int n);
 * @a: first argument pointer int type
 * @n: second argument int type
 *
 * Description: a function that prints n elements of
 * an array of integers, followed by a new line.
 * Return: na
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
