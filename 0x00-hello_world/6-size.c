#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longintType;
	long long int longlongintType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
