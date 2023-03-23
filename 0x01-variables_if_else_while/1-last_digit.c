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
	int last_digit;

	scanf("%d", &n);
	last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
	{
		printf("Last digit of 98 is 8 and is greater than 5\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);
}
