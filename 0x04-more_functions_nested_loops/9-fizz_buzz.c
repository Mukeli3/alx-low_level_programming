#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz
 * Multiples of 3 and 5 should print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	print("1");
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf(FizzBuzz);
	}
	printf('\n');

	return(0);
}
