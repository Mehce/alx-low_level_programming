#include "main.h"
/**
 * swap_int - swap the value of two integers.
 * @a: first value to be swapped.
 * @b: second value to be swapped.
 * return: void.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
