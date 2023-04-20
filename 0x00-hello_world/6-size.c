#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int c;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
