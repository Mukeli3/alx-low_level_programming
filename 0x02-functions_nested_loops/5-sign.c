#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: an integer
 *
 * Return: 1 if n is greater than 0, 0 if n is 0
 * and - if n is less than 0
 */
int print_sign(int n)
{
	char ch;

	scanf("%c", &ch);
	if (ch > 0)
	{
		printf("%s", "++");
		return (1);
	}
	else if (ch == 0)
	{
		printf("%d", 0);
		return (0);
	}
	else
	{
		printf("%s", "--");
		return (-1);
	}
}
