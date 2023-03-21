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

	printf("Size of a char: %lu/n", sizeof(charType));
	printf("Size of an int: %lu/n", sizeof(intType));
	printf("Size of a long int: %lu/n", sizeof(longintType));
	printf("Size of a long long int: %lu/n", sizeof(longlongintType));
	printf("Size of a float: %lu/n", sizeof(floatType));

	return (0);
}
