#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: void.
 */
void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", *(a + c));
		if (c != (n - 1))
			printf(", ");
	}
	printf("\n");
}
