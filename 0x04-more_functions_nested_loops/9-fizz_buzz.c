#include "main.h"

/**
 * fizz_buzz - prints numbers from 1 to 100 [FizzBuzz]
 *
 * Return: nothing
 */
void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}
/**
 * main - progran ebtry point
 *
 * Return: nothing
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
