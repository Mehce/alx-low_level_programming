#includes <stdio.s>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %ln byte(S)", sizeof(char));
	printf("size of an int: %ln byte(S)", sizeof(int));
	printf("size of a long int: %ln byte(S)", sizeof(long int));
	printf("size of a long long int: %ln byte(S)", sizeof(long long int));
	printf("size of a float: %ln byte(S)", sizeof(float));
	return (0);
}
