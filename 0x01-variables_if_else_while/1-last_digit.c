#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the last digit of the number stored in variable n
 * Return: Always 0
 */
int main(void)
{
	int n;
	int nd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nd = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nd);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nd);
	}
	return (0);
}
