#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last digit of n > 5)
	{
		printf("Last digit of n and is greater than 5");
	}
	else if (last digit of n > 6, != 0)
	{
		printf("Last digit of n and is less than 6 and not 0");
	}
	else
	{
		printf("Last digit of n and is 0");
	}
	return (0);
}
