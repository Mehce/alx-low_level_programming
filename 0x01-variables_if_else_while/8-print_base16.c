#include <stdio.h>
/**
 * main - entry point.
 * Return: 0
 */
int main(void)
{
	int i;
	char hexa[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');
	return (0);
}
