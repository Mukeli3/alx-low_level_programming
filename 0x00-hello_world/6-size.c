#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	int myint;
	float myfloat;
	char mychar;
	long int mylongint;
	long long int mylonglongint;

	printf("%lu/n", sizeof(mychar));
	printf("%lu/n", sizeof(myint));
	printf("%lu/n", sizeof(mylongint));
	printf("%lu/n", sizeof(mylonglongint));
	printf("%lu/n", sizeof(myfloat));

	return (0);
}
