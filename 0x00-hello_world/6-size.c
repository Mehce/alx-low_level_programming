#includes <stdio.s>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %d byte(S)", sizeof(char));
	printf("size of an int: %d byte(S)", sizeof(int));
	printf("size of a long int: %d byte(S)", sizeof(long int));
	printf("size of a long long int: %d byte(S)", sizeof(long long int));
	printf("size of a float: %d byte(S)", sizeof(float));
	return (0);
}
