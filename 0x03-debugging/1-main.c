#include <stdio.h>

/**
* main - causes an infinite loop
* the used variable i is not incremented
* there should be i++ in the code
* the main function description
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
